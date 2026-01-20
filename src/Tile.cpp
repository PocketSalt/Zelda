#include "Tile.h"

std::map<TileID, Texture2D> tileDefines;

void LoadTileTextures()
{
	tileDefines[TileID::Floor] = LoadTexture("data/tiles/floor.png");
	tileDefines[TileID::Wall] = LoadTexture("data/tiles/wall.png");
}

TileID CharToTile(char c)
{
	TileID tile = TileID::Floor;

	switch (c)
	{
	case '#':
		tile = TileID::Wall;
		break;
	case '.':
		tile = TileID::Floor;
		break;
	case '~':
		tile = TileID::Water;
		break;
	case '^':
		tile = TileID::Stairs;
		break;
	}
	return tile;
}