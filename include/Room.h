#pragma once

#include "raylib.h"
#include "Tile.h"
#include <vector>

const int ROOM_SIZE = 10;

class Room
{
public:
	struct LevelMap
	{
		TileID tiles[ROOM_SIZE][ROOM_SIZE];
		int tileSetID;
	};

	Room();
	Room(const char* fileName);
	const LevelMap& GetMap() const;

private:
	LevelMap m_tileMap;
	
	void LoadFileIntoRoom(const char* fileName);
};