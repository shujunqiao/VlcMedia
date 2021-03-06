// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/ObjectMacros.h"

#include "VlcMediaSettings.generated.h"


UCLASS(config=Engine)
class VLCMEDIAFACTORY_API UVlcMediaSettings
	: public UObject
{
	GENERATED_BODY()

public:

	/** Default constructor. */
	UVlcMediaSettings();

public:

	/** Whether VLC log messages should be logged. */
	UPROPERTY(config, EditAnywhere, Category=Debugging)
	bool EnableLog;
};
