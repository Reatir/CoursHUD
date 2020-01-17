// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameHUD.h"


AInGameHUD::AInGameHUD()
{

}

void AInGameHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AInGameHUD::BeginPlay()
{
	Super::BeginPlay();

	if (ComboClass)
	{
		ComboWidget = CreateWidget<UCombo>(GetWorld(), ComboClass);
		if (ComboWidget)
		{
			ComboWidget->AddToViewport();
		}
	}
	if (ChargePunchClass)
	{
		ChargePunchWidget = CreateWidget<UChargePunch>(GetWorld(), ChargePunchClass);
		if (ChargePunchWidget)
		{
			ChargePunchWidget->AddToViewport();
		}
	}
}

void AInGameHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AInGameHUD::UpdateComboCount(int32 Value)
{
	if (ComboWidget)
	{
		ComboWidget->UpdateComboCount(Value);
	}
}

void AInGameHUD::ResetCombo()
{
	if (ComboWidget)
	{
		ComboWidget->ResetCombo();
	}
}

void AInGameHUD::ResetCharge()
{
	if (ChargePunchWidget)
	{
		ChargePunchWidget->ResetCharge();
	}
}

void AInGameHUD::UpdateChargeBar(float Value)
{
	if (ChargePunchWidget)
	{
		ChargePunchWidget->UpdateBarre(Value);
	}
}
