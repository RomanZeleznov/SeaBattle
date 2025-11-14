#pragma once
#include "Vector.hpp"
class Ship
{
private:
	Vector position, direction;
	int length, hp;

public:
	Ship(Vector position, Vector direction, int length);
	Vector GetPosition();
	void SetPosition(Vector position);
	Vector GetDirection();
	void SetDirection(Vector direction);
	int GetLength();
	void TakeDamage();
	bool IsDestroyed();
};
