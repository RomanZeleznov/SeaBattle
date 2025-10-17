#pragma once
#include "Player.hpp"
class PlayerHuman: public Player
{
	public:
		bool isMakingMove;

	public:
		PlayerHuman(Field& myField, Field& enemyField, std::string name);

		void MakeMove();
		void ArrangeShips();
};

