#include "Display.h"
#include "ItemDefines.h"

int offsetx = 0;
int offsety = 0;

void DrawRoom(const Room::LevelMap& map)
{
	float tileSize = 1000.0f / ROOM_SIZE_X;

	for (int y = 0; y < ROOM_SIZE_Y; y++)
	{
		for (int x = 0; x < ROOM_SIZE_X; x++)
		{
			Vector2Int pos = Vector2Int(x, y);
			DrawTile(map.tileSetID, map.tiles[y][x], pos, tileSize);
		}
	}
}

void DrawItems(const std::vector<RoomItem>& items)
{
	float tileSize = 1000.0f / ROOM_SIZE_X;
	float scale = tileSize / 8.0f;

	for (auto& RoomItem : items)
	{
		Vector2 screenPos = { std::round(RoomItem.pos.x * tileSize) + offsetx, (std::round(RoomItem.pos.y * tileSize) + offsety) };
		Texture2D texture = itemDefines[RoomItem.ID]->GetTexture();
		DrawTextureEx(texture, screenPos, 0.0f, scale, WHITE);
	}
}

void DrawTile(int tileSetID, const TileID& tile, const Vector2Int& pos, float tileSize)
{
	float scale = tileSize / 8.0f;
	Vector2 screenPos = { std::round(pos.x * tileSize) + offsetx, (std::round(pos.y * tileSize) + offsety) };
	Texture2D texture = tileDefines[tile];
	DrawTextureEx(texture, screenPos, 0.0f, scale, WHITE);
}