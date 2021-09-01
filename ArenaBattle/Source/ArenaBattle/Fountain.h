// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "Fountain.generated.h"

UCLASS()
class ARENABATTLE_API AFountain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFountain();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// NOTE: UPROPERTY�� UE4���� memory ������ �ڵ����� �ñ�ڴٴ� �ǹ��̴�. �� �� UE4 object�� ���ϴ� �͵鸸 UPROPERTY�� ������ �����ϴ�.
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	// NOTE: VisibleAnywhere�� �־������ ������ ȯ�濡�� component�� �����ϴ� ���� ����������.
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;
		
	UPROPERTY(VisibleAnywhere,Category = ID)
	int32 ID;
	
};
