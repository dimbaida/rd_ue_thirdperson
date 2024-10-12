#pragma once

#include "CoreMinimal.h"
#include "TPAttributeSet.h"
#include "VitalAttributeSet.generated.h"

UCLASS()
class TPPROJECT_API UVitalAttributeSet : public UTPAttributeSet
{
public:
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

private:
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth);
};
