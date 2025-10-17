#pragma once
#include "Field.hpp"
#include <string>
class Player
{
	public:
		Field &myField, &enemyField;
		std::string name;

	public:
		Player(Field& myField, Field& enemyField, std::string name);
		virtual void MakeMove();
		virtual void ArrangeShips();

};

