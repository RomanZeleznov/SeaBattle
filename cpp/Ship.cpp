#include "Ship.hpp"
#include <iostream>

Ship::Ship(Vector position, Vector direction, int length) :
	position(position), direction(direction), length(length), hp(length)
{
	std::cout << "Called ship constructor" << std::endl;
}

Vector Ship::GetPosition()
{
	return position;
}
void Ship::SetPosition(Vector position)
{
	this->position = position;
}
Vector Ship::GetDirection()
{
	return direction;
}
void Ship::SetDirection(Vector direction)
{
	this->direction = direction;
}
int Ship::GetLength()
{
	return length;
}
void Ship::TakeDamage(BulletType bulletType)
{
	if(bulletType == BulletType::Standart)
	{
		hp--;
	}
	if (bulletType == BulletType::Explosive)
	{
		hp -= 2;
	}
	std::cout << "Ship damaged" << std::endl;
	if (!IsDestroyed())
		SpecialAbility();
}
bool Ship::IsDestroyed()
{
	return hp <= 0;
}
void Ship::SpecialAbility()
{
	countOfSpecialAbility = 0;
	std::cout << "Ship using special ability" << std::endl;
}