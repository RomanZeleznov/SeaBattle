#pragma once
#include <string>
#include <iostream>
#include "Field.hpp"
class Player
{
private:
	Field& m_myField, & m_enemyField;
	std::string m_name;

public:
	Player(Field& myField, Field& enemyField, std::string name);
	Field& GetMyField();
	void SetMyField(Field& myField);
	Field& GetEnemyField();
	void SetEnemyField(Field& enemyField);
	std::string GetName();
	void SetName(std::string name);
	virtual void MakeMove();
	virtual void ArrangeShips();

};
