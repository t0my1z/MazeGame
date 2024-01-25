#pragma once

#include "MazeElement.h"

class Wall : MazeElement
{
public:
	virtual void Enter() const override;
};

