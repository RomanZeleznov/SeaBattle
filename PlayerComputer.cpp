#include "PlayerComputer.hpp"
#include <iostream>

PlayerComputer::PlayerComputer(Field& myField, Field& enemyField, std::string name) : Player(myField, enemyField, name)
{
	std::cout << "PlayerComputer создан" << std::endl;
}

void PlayerComputer::MakeMove()
{
	std::cout << "PlayerComputer сделал ход" << std::endl;
}
void PlayerComputer::ArrangeShips()
{
	std::cout << "PlayerComputer расставил корабли" << std::endl;
}
