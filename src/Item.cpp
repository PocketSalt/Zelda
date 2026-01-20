#include "Item.h"

std::unordered_map<ItemID, WorldItem> itemDefines =
{
	{ItemID::Basic_Key, WorldItem("Basic Key", "data/items/basic_key.png")},
	{ItemID::Sword, WorldItem("Sword", "data/items/sword.png")},
};