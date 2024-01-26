// MazeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "Maze.h"
#include "Door.h"
#include "Wall.h"
#include "map"
#include "vector"

void PrintMaze(std::vector<MazeElement*>& MazeElements)
{
    for (size_t i = 0; i < MazeElements.size(); i++)
    {
        COORD newCoord;
        newCoord.X = MazeElements[i]->GetTransform().GetXPos();
        newCoord.Y = MazeElements[i]->GetTransform().GetYPos();

        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), MazeElements[i]->GetTransform().GetScreenPos());

        std::cout << MazeElements[i]->GetVisual() << std::endl;
    }
}

void EjercicioNumero1()
{
    std::map<Transform*, Door*> mapOfDoors;
    std::map<Transform*, Wall*> mapOfWalls;
    Maze* maze = new Maze();

    mapOfWalls[new Transform{ 1,0 }] = new Wall(Transform(1, 0));
    mapOfWalls[new Transform{ 1,1 }] = new Wall(Transform(1, 1));
    mapOfWalls[new Transform{ 1,2 }] = new Wall(Transform(1, 2));
    mapOfWalls[new Transform{ 2,0 }] = new Wall(Transform(2, 0));
    mapOfWalls[new Transform{ 2,2 }] = new Wall(Transform(2, 2));
    mapOfWalls[new Transform{ 3,0 }] = new Wall(Transform(3, 0));
    mapOfWalls[new Transform{ 3,2 }] = new Wall(Transform(3, 2));
    mapOfWalls[new Transform{ 4,0 }] = new Wall(Transform(4, 0));
    mapOfWalls[new Transform{ 4,2 }] = new Wall(Transform(4, 2));
    mapOfWalls[new Transform{ 5,0 }] = new Wall(Transform(5, 0));
    mapOfWalls[new Transform{ 5,2 }] = new Wall(Transform(5, 2));
    mapOfWalls[new Transform{ 6,0 }] = new Wall(Transform(6, 0));
    mapOfWalls[new Transform{ 6,1 }] = new Wall(Transform(6, 1));
    mapOfWalls[new Transform{ 6,2 }] = new Wall(Transform(6, 2));


    mapOfDoors[new Transform{ 2, 1 }] = new Door(Transform(2, 1));

    //maze->AddRoom(Transform(1, 0));
    maze->AddRoom(Transform(4, 1));

    std::vector<MazeElement*> MazeElements;

    if (mapOfDoors.size() > 0)
    {
        for (auto pair = mapOfDoors.begin(); pair != mapOfDoors.end(); ++pair)
        {
            MazeElements.push_back(pair->second);
        }
    }

    for (auto pair = mapOfWalls.begin(); pair != mapOfWalls.end(); ++pair)
    {
        MazeElements.push_back(pair->second);
    }

    for (auto pair = maze->m_mapOfRooms.begin(); pair != maze->m_mapOfRooms.end(); ++pair)
    {
        MazeElements.push_back(pair->second);
    }

    PrintMaze(MazeElements);
}

void EjercicioNumero2()
{
    
}

int main()
{
    //std::cout << "Hello World!\n";

    EjercicioNumero1();

    std::cin;
}


