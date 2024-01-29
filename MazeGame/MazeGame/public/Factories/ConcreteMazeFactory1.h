#pragma once
#include "MazeFactory.h"
#include "public/Door.h"
#include "public/Wall.h"
#include "public/Room.h"

class ConcreteMazeFactory1 : public MazeFactory
{
	virtual std::vector<MazeElement*> CreateMazeElements() override;
	virtual void CreateWalls() override;
	virtual void CreateRooms() override;
	virtual void CreateSpecialObjects() override;
};

