#include "PlayerHuman.hpp"
#include <iostream>

PlayerHuman::PlayerHuman(Field& myField, Field& enemyField, std::string name) : Player(myField, enemyField, name), m_isMakingMove(false)
{
	std::cout << "PlayerHuman создан" << std::endl;
}

bool PlayerHuman::GetIsMakingMove()
{
	return m_isMakingMove;
}
void PlayerHuman::SetIsMakingMove(bool isMakingMove)
{
	m_isMakingMove = isMakingMove;
}
void PlayerHuman::MakeMove()
{
	std::cout << "PlayerHuman сделал ход" << std::endl;
}
void PlayerHuman::ArrangeShips()
{
	std::cout << "PlayerHuman расставил корабли" << std::endl;
}
