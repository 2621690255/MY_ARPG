// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MY_ARPGGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MY_ARPG_API AMY_ARPGGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	virtual void StartPlay() override;
};
