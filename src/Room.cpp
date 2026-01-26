#include "Room.h"
#include <fstream>
#include <string>
#include <iostream>

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

void Room::OnEnter()
{
	/*
	for (auto& enemy : m_enemySpawns)
	{
		m_activeEnemies.push_back(enemy);
	}
	*/

	for (auto& item : m_itemSpawns)
	{
		if (item.itemID < static_cast<int>(ItemID::COUNT) && item.itemID >= 0)
			m_activeItems.push_back(RoomItem(static_cast<ItemID>(item.itemID), item.pos));
	}
}

const Room::LevelMap & Room::GetMap() const
{
	return m_tileMap;
}

const std::vector<RoomItem>& Room::GetRoomItems() const
{
	return m_activeItems;
}

void Room::LoadFileIntoRoom(const char* fileName)
{
	std::ifstream file(fileName);

	for (int y = 0; y < ROOM_SIZE_Y; y++)
	{
		for (int x = 0; x < ROOM_SIZE_X; x++)
		{
			char c;
			file >> c;

			m_tileMap.tiles[y][x] = CharToTile(c);
		}
	}

	file.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string line;
	while (std::getline(file, line))
	{
		char what;
		int x, y, type;
		if (!line.empty())
		{
			if (sscanf_s(line.c_str(), "%c %d %d %d", &what, 1, &x, &y, &type) == 4);

			//if (what == 'E')
			//	m_enemySpawns.push_back({ Vector2Int(x,y), type });
			if (what == 'I')
				m_itemSpawns.push_back({ Vector2Int(x,y), type });
			
		}
	}

	file.close();
}