// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NSG_LocalMaskPrimitive.generated.h"

UCLASS()
class TPPROJECT_API ANSG_LocalMaskPrimitive : public AActor
{
	GENERATED_BODY()

public:
	ANSG_LocalMaskPrimitive();

	virtual void OnConstruction(const FTransform& Transform) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual void PostEditMove(bool bFinished) override;
#endif

private:
	void RedrawDebugPrimitive() const;
	
protected:
	UPROPERTY()
	USceneComponent* SceneRoot;

public:
	
#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UBillboardComponent* EditorIcon;
#endif

	
};

