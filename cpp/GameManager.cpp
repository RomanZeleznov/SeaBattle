#include <iostream>
#include "GameManager.hpp"

GameManager::GameManager() : m_players(), m_currentPlayerID(-1), m_isRun(false)
{}

bool GameManager::GetIsRun()
{
	return m_isRun;
}
void GameManager::SetIsRun(bool isRun)
{
	m_isRun = isRun;
}
void GameManager::AddPlayer(std::shared_ptr<Player> player)
{
	if (player == nullptr)
		return;
	m_players.push_back(player);
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