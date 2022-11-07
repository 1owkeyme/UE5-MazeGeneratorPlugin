﻿// Copyright LowkeyMe. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Algorithm.h"


class Prim : public Algorithm
{
public:
	virtual TArray<TArray<uint8>> GetGrid(const FVector2D& Size) override;

	virtual ~Prim() override = default;
};
