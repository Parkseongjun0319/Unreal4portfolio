// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C02_SpawnActor.generated.h"

UCLASS()
class MYCPROJECT00_API AC02_SpawnActor : public AActor
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh;

public:	
	// Sets default values for this actor's properties
	AC02_SpawnActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	class UMaterialInstanceDynamic* 
		Material;

	UFUNCTION()
		void ChangeColor();
};
