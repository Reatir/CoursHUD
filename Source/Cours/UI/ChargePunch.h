// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "ChargePunch.generated.h"

/**
 * 
 */
UCLASS()
class COURS_API UChargePunch : public UUserWidget
{
	GENERATED_BODY()
	
public:

    UChargePunch(const FObjectInitializer& ObjectInitializer);

    virtual void NativeConstruct() override;

    void UpdateBarre(float Value);
    void ResetCharge();

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, meta = (Bindwidget))
       class UProgressBar* ChargeBarPunch;


};
