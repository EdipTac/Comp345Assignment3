#pragma once
#include "StrategyInterface.h"

class Drive : public StrategyInterface
{
public:
	void execute() const override;
};