#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "MovementAttributeSet.generated.h"


UCLASS()
class TPPROJECT_API UMovementAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Speed;
	ATTRIBUTE_ACCESSORS(UMovementAttributeSet, Speed);
};
