#pragma once

#include "vector2.h"
#include <string>
#include "raylib.h"

enum class ItemID
{
	Potion = 0,
	Basic_Key,
	Sword,
	COUNT
};

class Item
{
public:
	explicit Item(std::string name, const char* imageName);
	virtual ~Item() = default;

	virtual void Use() = 0;

	const std::string& GetName() const;
	const Texture2D& GetTexture() const;
protected:
	std::string m_name;
	Texture2D m_texture;
};

struct RoomItem
{
	ItemID ID;
	Vector2Int pos;

	RoomItem(ItemID IDD, Vector2Int poss)
	{
		ID = IDD;
		pos = poss;
	}
};