#pragma once
#include "Vector.hpp"
class Ship
{
public:
	enum BulletType
	{
		Standart, Explosive
	};
protected:
	int hp, countOfSpecialAbility = 1;
private:
	Vector position, direction;
	int length;

public:
	Ship(Vector position, Vector direction, int length);
	Vector GetPosition();
	void SetPosition(Vector position);
	Vector GetDirection();
	void SetDirection(Vector direction);
	int GetLength();
	void TakeDamage(BulletType bulletType);
	bool IsDestroyed();
	virtual void SpecialAbility();
	virtual ~Ship() {};
};
