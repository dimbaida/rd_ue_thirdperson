// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "NSG_LocalMasksControl.generated.h"

/**
 * 
 */
UCLASS()
class TPPROJECT_API UNSG_LocalMasksControl : public UEditorUtilityWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Local Masks")
	void GenerateLocalMasksTexture();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Local Masks")
	UTexture2D* Texture = nullptr;

protected:
	UTexture2D* CreateMaskTexture();
	
};
