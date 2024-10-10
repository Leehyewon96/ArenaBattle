// Fill out your copyright notice in the Description page of Project Settings.


#include "Game/ABGameMode.h"
#include "ABGameMode.h"
//#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	//DefaultPawnClass
	static ConstructorHelpers::FClassFinder<APawn> ThirdPersonClassRef(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	if (ThirdPersonClassRef.Class)
	{
		DefaultPawnClass = ThirdPersonClassRef.Class;
	}

	//PlayerController
	//PlayerControllerClass = AABPlayerController::StaticClass();
	
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerRef(TEXT("/Script/ArenaBattle.ABPlayerController"));
	if (PlayerControllerRef.Class)
	{
		PlayerControllerClass = PlayerControllerRef.Class;
	}
}
