#include "Ship.hpp"
#include <iostream>

Ship::Ship(Vector position, Vector direction, int length) :
	m_position(position), m_direction(direction), m_length(length), m_hp(length)
{
	std::cout << "Ship создан" << std::endl;
}
Ship::~Ship()
{
	std::cout << "Ship уничтожен" << std::endl;
}
Vector Ship::GetPosition()
{
	return m_position;
}
void Ship::SetPosition(Vector position)
{
	m_position = position;
}
Vector Ship::GetDirection()
{
	return m_direction;
}
void Ship::SetDirection(Vector direction)
{
	m_direction = direction;
}
int Ship::GetLength()
{
	return m_length;
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