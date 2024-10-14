#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "MovementAttributeSet.generated.h"


UCLASS()
class TPPROJECT_API UMovementAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UMovementAttributeSet, Speed);
};
