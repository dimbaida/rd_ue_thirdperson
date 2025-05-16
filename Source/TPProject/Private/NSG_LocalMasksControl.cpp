// Fill out your copyright notice in the Description page of Project Settings.


#include "NSG_LocalMasksControl.h"

#include "EngineUtils.h"
#include "NSG_LocalMaskPrimitive.h"
#include "Kismet/GameplayStatics.h"

void UNSG_LocalMasksControl::GenerateLocalMasksTexture()
{
	if (!GEditor)
	{
		return;
	}

	const UWorld* EditorWorld = GEditor->GetEditorWorldContext().World();
	if (!EditorWorld)
	{
		return;
	}

	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(EditorWorld, ANSG_LocalMaskPrimitive::StaticClass(), FoundActors);

	UE_LOG(LogTemp, Log, TEXT("Found %d NSG_LocalMaskPrimitive actors."), FoundActors.Num());

	TArray<ANSG_LocalMaskPrimitive*> MaskPrimitives;

	for (AActor* Actor : FoundActors)
	{
		if (ANSG_LocalMaskPrimitive* MaskActor = Cast<ANSG_LocalMaskPrimitive>(Actor))
		{
			MaskPrimitives.Add(MaskActor);
			UE_LOG(LogTemp, Log, TEXT(" - %s"), *MaskActor->GetName());

			// Example access:
			FVector Location = MaskActor->GetActorLocation();
			FVector Scale = MaskActor->GetActorScale3D();

			// Use location/scale/etc for texture logic...
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Failed to cast actor %s to ANSG_LocalMaskPrimitive"), *Actor->GetName());
		}
	}

	// TODO: Generate the texture based on collected MaskPrimitives
}

UTexture2D* CreateMaskTexture()
{
	const int32 Width = 16;
	const int32 Height = 16;

	UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height, PF_A32B32G32R32F); // High precision
	Texture->MipGenSettings = TMGS_NoMipmaps;
	Texture->CompressionSettings = TC_VectorDisplacementmap; // Avoid compression
	Texture->SRGB = false;
	Texture->UpdateResource();

	return Texture;
}