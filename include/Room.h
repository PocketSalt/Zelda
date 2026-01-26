#pragma once

#include "raylib.h"
#include "Tile.h"
#include "Item.h"
#include <vector>
#include "vector2.h"
#include <unordered_map>

const int ROOM_SIZE_X = 15;
const int ROOM_SIZE_Y = 10;

struct EnemySpawn
{
	Vector2Int pos;
	int enemyID;
};

struct ItemSpawn
{
	Vector2Int pos;
	int itemID;
};

class Room
{
public:
	struct LevelMap
	{
		TileID tiles[ROOM_SIZE_Y][ROOM_SIZE_X];
		int tileSetID;
	};

	Room();
	Room(const char* fileName);

	void OnEnter();
	void Update();

	const LevelMap& GetMap() const;
	const std::vector<RoomItem>& GetRoomItems() const;

private:
	LevelMap m_tileMap;
	std::vector<EnemySpawn> m_enemySpawns;
	std::vector<ItemSpawn> m_itemSpawns;

	//std::vector<Enemy> m_activeEnemies;
	std::vector<RoomItem> m_activeItems;

	void LoadFileIntoRoom(const char* fileName);
};

extern std::unordered_map<Vector2Int, Room> roomDefines;