#pragma once
#include <vector>
#include "Player.hpp"
class GameManager
{
	public:
		bool isRun;

	private:
		std::vector<Player*> m_players;
		int m_currentPlayerID;

	public:
		GameManager();

		void AddPlayer(Player& player);
		void StartGame();
		void StopGame();
		void ResumeGame();
		void EndGame();
};

