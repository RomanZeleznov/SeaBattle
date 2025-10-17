#include "Player.hpp"
Player::Player(Field& myField, Field& enemyField, std::string name) : m_myField(myField), m_enemyField(enemyField), m_name(name)
{
}
Field& Player::GetMyField()
{
	return m_myField;
}
void Player::SetMyField(Field& myField)
{
	m_myField = myField;
}
Field& Player::GetEnemyField()
{
	return m_enemyField;
}
void Player::SetEnemyField(Field& enemyField)
{
	m_enemyField = enemyField;
}
std::string Player::GetName()
{
	return m_name;
}
void Player::SetName(std::string name)
{
	m_name = name;
}
void Player::MakeMove()
{

}
void Player::ArrangeShips()
{

}