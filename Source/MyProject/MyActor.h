// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class MYPROJECT_API AMyActor : public AActor
{
	GENERATED_BODY()	
	public:	
		// Sets default values for this actor's properties
		AMyActor();
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
		int32 TotalDamage;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Damage")
		int32 DamageTimeInSeconds;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Category="Damage")
		int32 DamagePerSecond;
	private:
		UFUNCTION(BlueprintCallable, Category="Damage")
		void CalculateValues();
		UFUNCTION(BlueprintImplementableEvent, Category="Damage")
		void CalledFromCpp();
	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;
	public:	
		// Called every frame
		virtual void Tick(float DeltaTime) override;
};
