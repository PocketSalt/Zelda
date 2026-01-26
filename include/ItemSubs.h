#pragma once

#include "Item.h"

class Potion : public Item
{
public:
	Potion(std::string name, const char* imageName, int healAmt)
		: Item(name, imageName), m_healAmount(healAmt) {};
	~Potion() = default;

	void Use() override;

private:
	int m_healAmount;
};

class Weapon : public Item
{
public:
	Weapon(std::string name, const char* imageName)
		: Item(name, imageName) {};
	~Weapon() = default;

	void Use() override;
};

class Key : public Item
{
public:
	Key(std::string name, const char* imageName)
		: Item(name, imageName) {};
	~Key() = default;

	void Use() override;
};