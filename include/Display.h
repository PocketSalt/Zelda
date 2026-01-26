#pragma once

#include "Room.h"
#include "vector2.h"
#include <vector>

void DrawTile(int tileSetID, const TileID& tile, const Vector2Int& pos, float tileSize);
void DrawRoom(const Room::LevelMap& map);
void DrawItems(const std::vector<RoomItem>& items);