#pragma once
#include "Ship.hpp"
class AmmunitionShip : public Ship 
{
public:
	AmmunitionShip& operator=(Ship s);
	AmmunitionShip(Vector position, Vector direction, int length);
	AmmunitionShip(AmmunitionShip& ammunitionShip) = delete;
	void TakeDamage(const BulletType bulletType);
	void SpecialAbility();
};

