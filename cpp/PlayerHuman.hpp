#pragma once
#include "Player.hpp"
class PlayerHuman : public Player
{
private:
	bool m_isMakingMove;

public:
	PlayerHuman(Field& myField, Field& enemyField, std::string name);
	bool GetIsMakingMove();
	void SetIsMakingMove(bool isMakingMove);
	void MakeMove();
	void ArrangeShips();
};
