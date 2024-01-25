#pragma once

#include "MazeElement.h"

class Room : MazeElement
{
public:
	virtual void Enter() const override;
};

