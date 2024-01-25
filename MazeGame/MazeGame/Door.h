#pragma once

#include "MazeElement.h"

class Door : MazeElement
{
public:
	virtual void Enter() const override;
};

