#pragma once

enum class TileID
{
    Floor = 0,
    Wall,
    Water,
    Stairs
};

struct TileDef
{
    bool solid;
    TileID tileID;
};

TileID CharToTile(char c);