#include "Item.h"

Item::Item(std::string name, const char* imageName)
{
	m_name = name;
	m_texture = LoadTexture(imageName);
}

const std::string& Item::GetName() const
{
	return m_name;
}

const Texture2D& Item::GetTexture() const
{
	return m_texture;
}