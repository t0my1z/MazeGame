#pragma once
#include "public/MazeElement.h"
#include <vector>

class MazeFactory
{
protected:
	//Main method called to create the maze elements. It has to be implement by all the concrete MazeFactories
	//and this method is expected to call the other Create Methods, but the implementation of that is left for the concrete factory
	//this function will return a list of all the created maze elements, so the one that calls the factory can do as it sees fit with them
	virtual std::vector<MazeElement*> CreateMazeElements() = 0;
	//Method used to create walls. The concrete factory decides which walls to create, how and when
	virtual void CreateWalls() = 0;
	//Method used to create rooms. The concrete factory decides rooms walls to create, how and when
	virtual void CreateRooms() = 0;
	//Method used to create special objects. This objects are things like doors, bombs, or treasure chests. 
	//Since this type of objects require the rest of the maze to already be built, this method is expected to be called last after creating walls and rooms.
	//the concrete factory decides which special elements it wants to create
	virtual void CreateSpecialObjects() = 0;
};

