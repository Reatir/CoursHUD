// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Combo.generated.h"

/**
 * 
 */
UCLASS()
class COURS_API UCombo : public UUserWidget
{
	GENERATED_BODY()

public:

    

    UCombo(const FObjectInitializer& ObjectInitializer);

    virtual void NativeConstruct() override;

    void UpdateComboCount(int32 Value);
    void ResetCombo();

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, meta = (Bindwidget))
        class UTextBlock* TxtCombo;


};
