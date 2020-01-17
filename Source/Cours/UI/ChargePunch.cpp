// Fill out your copyright notice in the Description page of Project Settings.


#include "ChargePunch.h"

UChargePunch::UChargePunch(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	//ChargeBarPunch->SetVisibility(ESlateVisibility::Visible);
}

void UChargePunch::NativeConstruct()
{
	Super::NativeConstruct();

}

void UChargePunch::UpdateBarre(float Value)
{
	if(ChargeBarPunch)
	{
		ChargeBarPunch->SetPercent(Value);
	}
}

void UChargePunch::ResetCharge()
{
	if (ChargeBarPunch)
	{
		ChargeBarPunch->SetPercent(0.0f);
	}
}
