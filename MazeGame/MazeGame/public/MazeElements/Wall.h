#pragma once

#include "MazeElement.h"

class Wall : public MazeElement
{
public:
	Wall(/*const char* visual,*/ Transform transform);

public:
	virtual void Enter() override;
};

