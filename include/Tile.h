#pragma once

#include <unordered_map>
#include "raylib.h"
#include <map>

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

extern std::map<TileID, Texture2D> tileDefines;

void LoadTileTextures();
TileID CharToTile(char c);