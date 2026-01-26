#pragma once

#include "Item.h"
#include "ItemSubs.h"
#include <unordered_map>
#include <memory>

extern std::unordered_map<ItemID, std::unique_ptr<Item>> itemDefines;

void InitItems();