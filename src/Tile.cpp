#include "Tile.h"

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