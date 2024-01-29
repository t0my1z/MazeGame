#include "Maze.h"

void Maze::AddRoom(Transform positionForRoom)
{
	//Room* pNewRoom = new Room(positionForRoom);
	m_mapOfRooms[new Transform(positionForRoom)] = new Room(positionForRoom);
}

const Room* Maze::RoomNo(Transform* posToLook)
{
	auto pair = m_mapOfRooms.find(posToLook);

	if (pair != m_mapOfRooms.end())
	{
		return pair->second;
	}
	else return nullptr;
}