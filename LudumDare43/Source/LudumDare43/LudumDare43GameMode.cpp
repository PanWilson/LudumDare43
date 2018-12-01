// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "LudumDare43GameMode.h"
#include "LudumDare43Ball.h"

ALudumDare43GameMode::ALudumDare43GameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ALudumDare43Ball::StaticClass();
}
