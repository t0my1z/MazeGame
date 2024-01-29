#include "Door.h"

Door::Door(Transform transform)
	:
	MazeElement(new char[3] {"[]"}, transform)
{
	
}

void Door::Enter()
{
}
