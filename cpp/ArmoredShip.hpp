#pragma once
#include "Ship.hpp"
#include <iostream>
class ArmoredShip : public Ship
{
public:
	ArmoredShip& operator=(Ship s);
	ArmoredShip(Vector position, Vector direction, int length);
	ArmoredShip(ArmoredShip& armoredShip) = delete;
	void TakeDamage(const BulletType bulletType);
	void SpecialAbility();
};

