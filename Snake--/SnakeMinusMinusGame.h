#ifndef SNAKE_MINUS_MINUS_GAME
#define SNAKE_MINUS_MINUS_GAME

#include "SnakeMinusMinusEntity.h"

#include <chrono>
#include <thread>
#include <memory>
#include <vector>

using std::unique_ptr;
using std::make_unique;
using std::vector;

class SnakeMinusMinusGame
{
private:
	bool gameIsRunning;
	
	int sleepGameLoopFor;
	
	vector<unique_ptr<SnakeMinusMinusEntity>> foodItems;


public:
	SnakeMinusMinusGame();

	void start();

	void stop();
};


#endif