#include "ItemDefines.h"

std::unordered_map<ItemID, std::unique_ptr<Item>> itemDefines;

void InitItems()
{
	itemDefines.emplace(
		ItemID::Basic_Key,
		std::make_unique<Key>("Basic Key", "data/items/key.png")
	);

	itemDefines.emplace(
		ItemID::Sword,
		std::make_unique<Weapon>("Sword", "data/items/sword.png")
	);

	itemDefines.emplace(
		ItemID::Potion,
		std::make_unique<Potion>("Potion", "data/items/potion.png", 5)
	);
}
