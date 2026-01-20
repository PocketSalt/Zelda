#include "Display.h"

int offsetx = 350;
int offsety = 100;

void DrawRoom(const Room::LevelMap& map)
{
	float tileSize = 600.0f / ROOM_SIZE;

	for (int y = 0; y < ROOM_SIZE; y++)
	{
		for (int x = 0; x < ROOM_SIZE; x++)
		{
			Vector2Int pos = Vector2Int(x, y);
			DrawTile(map.tileSetID, map.tiles[y][x], pos, tileSize);
		}
	}
}

void DrawTile(int tileSetID, const TileID& tile, const Vector2Int& pos, float tileSize)
{
	float scale = tileSize / 8.0f;
	Vector2 screenPos = { std::round(pos.x * tileSize) + offsetx, (std::round(pos.y * tileSize) + offsety) };
	Texture2D texture = tileDefines[tile];
	DrawTextureEx(texture, screenPos, 0.0f, scale, WHITE);
}