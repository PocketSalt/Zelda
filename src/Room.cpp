#include "Room.h"
#include <fstream>

Room::Room()
{
	m_tileMap.tileSetID = 0;
	LoadFileIntoRoom("data/rooms/room00.txt");
}

Room::Room(const char* fileName)
{
	m_tileMap.tileSetID = 0;
	LoadFileIntoRoom(fileName);
}

const Room::LevelMap & Room::GetMap() const
{
	return m_tileMap;
}

void Room::LoadFileIntoRoom(const char* fileName)
{
	std::ifstream file(fileName);

	for (int y = 0; y < ROOM_SIZE; y++)
	{
		for (int x = 0; x < ROOM_SIZE; x++)
		{
			char c;
			file >> c;

			m_tileMap.tiles[y][x] = CharToTile(c);
		}
	}
}