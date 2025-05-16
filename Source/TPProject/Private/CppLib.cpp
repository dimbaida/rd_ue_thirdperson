// Fill out your copyright notice in the Description page of Project Settings.
#include "TPProject/Public/CppLib.h"
#include "UObject/UnrealTypePrivate.h"

TArray<FString> UCppLib::GetAllProperties(UClass* Class)
{
	TArray<FString> LibNames;
	if (Class != nullptr)
	{
		for (TFieldIterator<UProperty> Iterator(Class); Iterator; ++Iterator)
		{
			UProperty* Property = *Iterator;
			if (Property->HasAnyPropertyFlags(EPropertyFlags::CPF_Edit))
			{
				LibNames.Add(Property->GetName());
			}
		}
	}
	return LibNames;
}
