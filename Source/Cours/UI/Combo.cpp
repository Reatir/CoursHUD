// Fill out your copyright notice in the Description page of Project Settings.


#include "Combo.h"


UCombo::UCombo(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{

}

void UCombo::NativeConstruct()
{
	Super::NativeConstruct();
}

void UCombo::UpdateComboCount(int32 Value)
{
	if (TxtCombo && Value > 1)
	{
		if (TxtCombo->GetVisibility() == ESlateVisibility::Hidden)
		{
			TxtCombo->SetVisibility(ESlateVisibility::Visible);
		}
		TxtCombo->SetText(FText::FromString(FString::FromInt(Value) + " x combo"));
	}
}

void UCombo::ResetCombo()
{
	if (TxtCombo)
	{
		TxtCombo->SetVisibility(ESlateVisibility::Hidden);

	}
}
