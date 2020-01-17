// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CoursCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "UI/InGameHUD.h"

//////////////////////////////////////////////////////////////////////////
// ACoursCharacter

ACoursCharacter::ACoursCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	CurrentComboCount = 0;
	PercentCharge = 0.0f;
	boolPunchInCharge = false;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACoursCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Click", IE_Released, this, &ACoursCharacter::punch);
	PlayerInputComponent->BindAction("Click", IE_Released, this, &ACoursCharacter::ResetChargeBar);
	PlayerInputComponent->BindAction("Click", IE_Pressed, this, &ACoursCharacter::UpdateChargeBar);

	PlayerInputComponent->BindAxis("MoveForward", this, &ACoursCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACoursCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACoursCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACoursCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ACoursCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ACoursCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ACoursCharacter::OnResetVR);
}


void ACoursCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ACoursCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ACoursCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ACoursCharacter::punch()
{
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		CurrentComboCount++;
		InGameHUD->UpdateComboCount(CurrentComboCount);
	}
	if (!GetWorld()->GetTimerManager().IsTimerActive(ComboResetHandle))
	{
		GetWorld()->GetTimerManager().SetTimer(ComboResetHandle, this, &ACoursCharacter::ResetCombo, 5.0f, false);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(ComboResetHandle);
		GetWorld()->GetTimerManager().SetTimer(ComboResetHandle, this, &ACoursCharacter::ResetCombo, 5.0f, false);
	}
}

void  ACoursCharacter::ResetCombo()
{
	CurrentComboCount = 0;
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		InGameHUD->ResetCombo();
	}
}

void ACoursCharacter::ResetChargeBar()
{
	boolPunchInCharge = false;
	PercentCharge = 0.0f;
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		InGameHUD->ResetCharge();
		GetWorld()->GetTimerManager().ClearTimer(ChargePunchAugmentHandle);
	}
	
}

void ACoursCharacter::UpdateChargeBar()
{
	boolPunchInCharge = true;
	AInGameHUD* InGameHUD = Cast<AInGameHUD>(GetWorld()->GetFirstPlayerController()->GetHUD());
	if (InGameHUD)
	{
		PercentCharge += 0.05f;
		InGameHUD->UpdateChargeBar(PercentCharge);
	}
	if (!GetWorld()->GetTimerManager().IsTimerActive(ChargePunchAugmentHandle))
	{
		GetWorld()->GetTimerManager().SetTimer(ChargePunchAugmentHandle, this, &ACoursCharacter::UpdateChargeBar, 0.3f, true);
	}
	
}

void ACoursCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACoursCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACoursCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ACoursCharacter::MoveRight(float Value)
{
	if ( (Controller != NULL) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
