// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Components/WidgetComponent.h"
#include "Combo.h"
#include "ChargePunch.h"
#include "InGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class COURS_API AInGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AInGameHUD();

	virtual void DrawHUD() override;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION()
		void UpdateComboCount(int32 Value);

	UFUNCTION()
		void ResetCombo();

	UFUNCTION()
		void ResetCharge();

	UFUNCTION()
		void UpdateChargeBar(float Value);

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<UUserWidget> ComboClass;

	UPROPERTY(EditDefaultsOnly, Category = "Widgets")
		TSubclassOf<UUserWidget> ChargePunchClass;
	
private:

	UCombo* ComboWidget;

	UChargePunch* ChargePunchWidget;
};
