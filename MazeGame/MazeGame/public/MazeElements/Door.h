#pragma once

#include "MazeElement.h"

class Door : public MazeElement
{
public:
	Door(Transform transform);

public:
	virtual void Enter() override;
};

