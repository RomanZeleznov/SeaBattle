#include "PlayerHuman.hpp"

PlayerHuman::PlayerHuman(Field& myField, Field& enemyField, std::string name) : Player(myField, enemyField, name), m_isMakingMove(false)
{
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
}
void PlayerHuman::ArrangeShips()
{
}