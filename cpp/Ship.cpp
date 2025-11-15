#include "Ship.hpp"
#include <iostream>

Ship::Ship(Vector position, Vector direction, int length) :
	position(position), direction(direction), length(length), hp(length)
{}
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
void Ship::TakeDamage()
{
	hp--;
}
bool Ship::IsDestroyed()
{
	return hp == 0;
}