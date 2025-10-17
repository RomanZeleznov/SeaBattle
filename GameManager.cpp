#include "GameManager.hpp"
#include <iostream>

GameManager::GameManager() : m_players(0), m_currentPlayerID(-1), m_isRun(false)
{
	std::cout << "GameManager создан" << std::endl;
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
	m_players.push_back(&player);
	std::cout << "Игрок \"" << player.GetName() << "\" добавлен" << std::endl;
}
void GameManager::StartGame()
{
	std::cout << "Игра начата" << std::endl;
}
void GameManager::StopGame()
{
	std::cout << "Игра приостановлена" << std::endl;
}
void GameManager::ResumeGame()
{
	std::cout << "Игра возобновлена" << std::endl;
}
void GameManager::EndGame()
{
	std::cout << "Игра окончена" << std::endl;
}
