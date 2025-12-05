#include "AmmunitionShip.hpp"
#include <iostream>
AmmunitionShip::AmmunitionShip(Vector position, Vector direction, int length) : Ship(position, direction, length)
{
	std::cout << "Called ammunition ship constructor" << std::endl;
}
void AmmunitionShip::TakeDamage(const BulletType bulletType)
{
	if (bulletType == BulletType::Explosive)
	{
		hp = 0;
		std::cout << "Ammunition ship exploded" << std::endl;
		return;
	}
	hp--;
	if (!IsDestroyed())
		SpecialAbility();
	std::cout << "Ammunition ship damaged" << std::endl;
}
void AmmunitionShip::SpecialAbility()
{
	std::cout << "Ammunition using special ability" << std::endl;
	countOfSpecialAbility = 0;
}
AmmunitionShip& AmmunitionShip::operator=(Ship s)
{
	std::cout << "Assigned ship" << std::endl;
	AmmunitionShip ammunitionShip(s.GetPosition(), s.GetDirection(), s.GetLength());
	return ammunitionShip;
}
