#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CVertexMesh.generated.h"

UCLASS()
class TOPVIEW_API ACVertexMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	ACVertexMesh();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	void AddIndices(int32 InStart);

private:
	UPROPERTY(VisibleDefaultsOnly)
		class UProceduralMeshComponent* ProcMesh;

private:
	TArray<FVector> Positions;
	TArray<int32> Indices;
	TArray<FVector> Normals;
	TArray<FColor> Colors;
	TArray<FVector2D> UVs;
};
