#include "Display.h"

void DrawRoom(const Room::LevelMap& map)
{
	int areaSize = 600;
	float tileSize = 600 / ROOM_SIZE;

	for (int y = 0; y < ROOM_SIZE; y++)
	{
		for (int x = 0; x < ROOM_SIZE; x++)
		{
			Vector2Int pos = Vector2Int(y, x);
			DrawTile(map.tileSetID, map.tiles[x][y], pos, tileSize);
		}
	}
}

void DrawTile(int tileSetID, const TileID& tile, const Vector2Int& pos, float tileSize)
{
	Color colour = WHITE;
	switch (tile)
	{
	case TileID::Floor:
		colour = BLUE;
		break;
	case TileID::Wall:
		colour = BLACK;
		break;
	}
	DrawRectangle(pos.x * tileSize, pos.y * tileSize, tileSize, tileSize, colour);
}