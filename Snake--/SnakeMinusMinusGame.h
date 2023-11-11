#ifndef SNAKE_MINUS_MINUS_GAME
#define SNAKE_MINUS_MINUS_GAME


#include <chrono>
#include <thread>


class SnakeMinusMinusGame
{
private:
	bool gameIsRunning;
	int sleepGameLoopFor;

public:
	void start();

	void stop();
};


#endif