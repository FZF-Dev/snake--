#include "SnakeMinusMinusGame.h"


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