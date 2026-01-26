#include "ItemSubs.h"
#include <iostream>

void Potion::Use()
{
	std::cout << "Player Heals For " << m_healAmount << " HP.";
	// player heal for m_healAmount
}

void Weapon::Use()
{
	std::cout << "Player Uses " << m_name << " Weapon.";
	// player equips weapon
}

void Key::Use()
{
	std::cout << "Idk why the player has to use the Item but I guess it shall be used.";
	// player uses Key.
}