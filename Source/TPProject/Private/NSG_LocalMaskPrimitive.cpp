#include "NSG_LocalMaskPrimitive.h"
#include "Editor.h"
#include "DrawDebugHelpers.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "UObject/ConstructorHelpers.h"

ANSG_LocalMaskPrimitive::ANSG_LocalMaskPrimitive()
{
	PrimaryActorTick.bCanEverTick = false;
	bNetLoadOnClient = false;
	
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	RootComponent = SceneRoot;

#if WITH_EDITORONLY_DATA
	EditorIcon = CreateDefaultSubobject<UBillboardComponent>(TEXT("EditorIcon"));
	EditorIcon->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UTexture2D> SpriteTexture(TEXT("Texture2D'/Engine/EditorResources/S_ReflActorIcon.S_ReflActorIcon'"));
	if (SpriteTexture.Succeeded())
	{
		EditorIcon->SetSprite(SpriteTexture.Object);
	}

	EditorIcon->SetHiddenInGame(true);
	EditorIcon->bIsScreenSizeScaled = true;
#endif
}

void ANSG_LocalMaskPrimitive::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

#if WITH_EDITOR
	RedrawDebugPrimitive();
#endif
}

#if WITH_EDITOR
void ANSG_LocalMaskPrimitive::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	RedrawDebugPrimitive();
}

void ANSG_LocalMaskPrimitive::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);
	RedrawDebugPrimitive();
}
#endif

void ANSG_LocalMaskPrimitive::RedrawDebugPrimitive() const
{
#if WITH_EDITOR
	if (!GetWorld() || !GIsEditor || GetWorld()->IsGameWorld())
	{
		return;
	}

	FlushPersistentDebugLines(GetWorld());

	DrawDebugSphere(
		GetWorld(),
		GetActorLocation(),
		100.f * GetActorScale().GetMax(),
		24,
		FColor::Magenta,
		true,  // persistent
		0.f,   // duration
		0,
		1.0f   // thickness
	);
#endif
}
