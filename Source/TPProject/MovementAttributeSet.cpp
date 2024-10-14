// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementAttributeSet.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

void UMovementAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);
	if (Attribute == GetSpeedAttribute())
	{
		AActor* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);	
		if (Player)
		{
			ACharacter* Character = Cast<ACharacter>(Player);
			if (Character)
			{
				UCharacterMovementComponent* MovementComponent = Character->GetCharacterMovement();
				if (MovementComponent)
				{
					MovementComponent->MaxWalkSpeed = NewValue;
				}
			}
		}
	}

}
