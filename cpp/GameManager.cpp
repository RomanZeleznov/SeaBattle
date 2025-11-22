#include <iostream>
#include "GameManager.hpp"

GameManager::GameManager() : m_players(), m_currentPlayerID(-1), m_isRun(false)
{}
GameManager::GameManager(const GameManager& gm) : m_players(), m_currentPlayerID(gm.m_currentPlayerID), m_isRun(gm.m_isRun)
{
	for (std::shared_ptr<Player> p : gm.m_players)
		m_players.push_back(std::make_shared<Player>(Player{ *p }));
}
bool GameManager::GetIsRun()
{
	return m_isRun;
}
void GameManager::SetIsRun(bool isRun)
{
	m_isRun = isRun;
}
void GameManager::AddPlayer(Player& player)
{
	m_players.push_back(std::make_shared<Player>(player));
}
void GameManager::StartGame()
{
}
void GameManager::StopGame()
{
}
void GameManager::ResumeGame()
{
}
void GameManager::EndGame()
{
}