#pragma once

#include "vector2.h"
#include <unordered_map>
#include <string>

enum class ItemID
{
	Basic_Key = 0,
	Sword,
};

struct WorldItem
{
	std::string name;
	const char* imageName;

	WorldItem(std::string nam, const char* imgName)
	{
		name = nam;
		imageName = imgName;
	}
};

struct RoomItem
{
	ItemID ID;
	Vector2Int pos;
};

extern std::unordered_map<ItemID, WorldItem> itemDefines;