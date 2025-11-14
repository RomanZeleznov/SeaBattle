#pragma once
#include <vector>
#include "Player.hpp"
class GameManager
{
private:
	bool m_isRun;
	std::vector<std::shared_ptr<Player>> m_players;
	int m_currentPlayerID;

public:
	GameManager();
	GameManager(const GameManager& gm);
	bool GetIsRun();
	void SetIsRun(bool isRun);
	void AddPlayer(Player& player);
	void StartGame();
	void StopGame();
	void ResumeGame();
	void EndGame();
};
