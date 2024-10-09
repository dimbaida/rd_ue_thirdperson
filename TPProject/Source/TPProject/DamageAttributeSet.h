#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "DamageAttributeSet.generated.h"


UCLASS()
class TPPROJECT_API UDamageAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage);
};
