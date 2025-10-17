#pragma once
#include <vector>
#include "Player.hpp"
class GameManager
{
	private:
		bool m_isRun;
		std::vector<Player*> m_players;
		int m_currentPlayerID;

	public:
		GameManager();
		bool GetIsRun();
		void SetIsRun(bool isRun);
		void AddPlayer(Player& player);
		void StartGame();
		void StopGame();
		void ResumeGame();
		void EndGame();
};

