#pragma once
#include "Vector.hpp"
class Ship
{
	private:
		Vector m_position, m_direction;
		int m_length, m_hp;

	public:
		Ship(Vector position, Vector direction, int length);
		~Ship();
		Vector GetPosition();
		void SetPosition(Vector position);
		Vector GetDirection();
		void SetDirection(Vector direction);
		int GetLength();
		void TakeDamage();
		bool IsDestroyed();
};

