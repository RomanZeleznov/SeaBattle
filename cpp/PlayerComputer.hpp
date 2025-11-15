#pragma once
#include "Player.hpp"
class PlayerComputer : public Player
{
	public:
		PlayerComputer(Field& myField, Field& enemyField, std::string name);
		void MakeMove();
		void ArrangeShips();
};

