#pragma once
#include "Room.h"
#include "map"

class Maze
{
public:
	std::map<Transform*, Room*> m_mapOfRooms;

public:
	void AddRoom(Transform positionForRoom);
	const Room* RoomNo(Transform* posToLook);
};

