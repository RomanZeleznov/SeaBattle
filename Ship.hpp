#pragma once
#include "Vector.hpp"
class Ship
{
	public:
		Vector position, direction;
		int length;
	
	private:
		int m_hp;

	public:
		Ship(Vector position, Vector direction, int length);
		~Ship();
		void TakeDamage();
		bool IsDestroyed();
};

