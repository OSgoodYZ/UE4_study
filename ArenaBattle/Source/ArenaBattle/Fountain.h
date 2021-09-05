// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/RotatingMovementComponent.h"
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
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void PostInitializeComponents() override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// NOTE: UPROPERTY은 UE4에게 memory 관리를 자동으로 맡기겠다는 의미이다. 이 때 UE4 object에 속하는 것들만 UPROPERTY의 적용이 가능하다.
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Body;

	// NOTE: VisibleAnywhere을 넣어줘야지 에디터 환경에서 component를 수정하는 것이 가능해진다.
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Water;

	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* Light;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* Splash;
		
	UPROPERTY(VisibleAnywhere,Category = ID)
	int32 ID;

	UPROPERTY(VisibleAnywhere)
	URotatingMovementComponent* Movement;

private:
	UPROPERTY(EditAnywhere, Category = Stat, Meta = (AllowPrivateAccess = true))
	float RotateSpeed;
	
};
