#include "PlayerHuman.hpp"
#include <iostream>

PlayerHuman::PlayerHuman(Field& myField, Field& enemyField, std::string name) : Player(myField, enemyField, name), isMakingMove(false)
{
	std::cout << "PlayerHuman создан" << std::endl;
}

void PlayerHuman::MakeMove()
{
	std::cout << "PlayerHuman сделал ход" << std::endl;
}
void PlayerHuman::ArrangeShips()
{
	std::cout << "PlayerHuman расставил корабли" << std::endl;
}
