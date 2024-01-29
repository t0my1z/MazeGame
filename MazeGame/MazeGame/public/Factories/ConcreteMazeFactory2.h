#pragma once
#include "public/MazeFactory.h"

class ConcreteMazeFactory2 : public MazeFactory
{
	virtual std::vector<MazeElement*> CreateMazeElements() override;
	virtual void CreateWalls() override;
	virtual void CreateRooms() override;
	virtual void CreateSpecialObjects() override;

};

