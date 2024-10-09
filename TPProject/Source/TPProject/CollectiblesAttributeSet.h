#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "CollectiblesAttributeSet.generated.h"


UCLASS()
class TPPROJECT_API UCollectiblesAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Coins;
	ATTRIBUTE_ACCESSORS(UCollectiblesAttributeSet, Coins);
};
