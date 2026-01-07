#pragma once
#include "Player/Player.h"

/**
 * @brief Game scene contains any game data
 */
class GameScene
{
public:
	GameScene();
	~GameScene();
	void Update();
	void Render();
private:
	Player player;
};

