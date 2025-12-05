#include "ArmoredShip.hpp"
ArmoredShip::ArmoredShip(Vector position, Vector direction, int length) : Ship(position, direction, length)
{
	std::cout << "Called armored ship constructor" << std::endl;
}
void ArmoredShip::TakeDamage(const BulletType bulletType)
{
	if (bulletType == BulletType::Explosive)
	{
		std::cout << "Armored ship damaged" << std::endl;
		Ship::TakeDamage(bulletType);
	}
}
void ArmoredShip::SpecialAbility()
{
	std::cout << "Armored ship using special ability" << std::endl;
	countOfSpecialAbility = 0;
}
ArmoredShip& ArmoredShip::operator=(Ship s)
{
	std::cout << "Assigned ship" << std::endl;
	ArmoredShip armoredShip(s.GetPosition(), s.GetDirection(), s.GetLength());
	return armoredShip;
}