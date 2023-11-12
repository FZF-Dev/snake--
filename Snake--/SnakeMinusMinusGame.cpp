#include "SnakeMinusMinusGame.h"


SnakeMinusMinusGame::SnakeMinusMinusGame()
{
	this->foodItems = vector<unique_ptr<SnakeMinusMinusEntity>>();
}


void SnakeMinusMinusGame::start()
{
	SnakeMinusMinusGame::gameIsRunning = true;
	SnakeMinusMinusGame::sleepGameLoopFor = 500;

	while(gameIsRunning)
	{



		std::this_thread::sleep_for(std::chrono::milliseconds(SnakeMinusMinusGame::sleepGameLoopFor));
	}
}


void SnakeMinusMinusGame::stop()
{

}