#include "Ship.hpp"
#include <iostream>

Ship::Ship(Vector position, Vector direction, int length) :
	position(position), direction(direction), length(length), m_hp(length)
{
	std::cout << "Ship создан" << std::endl;
}
Ship::~Ship()
{
	std::cout << "Ship уничтожен" << std::endl;
}
void Ship::TakeDamage()
{
	std::cout << "Корабль получил урон" << std::endl;
}
bool Ship::IsDestroyed()
{
	std::cout << "Корабль проверен на разрушение" << std::endl;
	return false;
}