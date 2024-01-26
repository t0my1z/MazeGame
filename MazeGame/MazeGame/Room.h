#pragma once

#include "MazeElement.h"

class Room : public MazeElement
{
public:
	Room(Transform transform);

public:
	virtual void Enter() override;
};

