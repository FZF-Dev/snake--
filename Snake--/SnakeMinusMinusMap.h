#ifndef SNAKE_MINUS_MINUS_MAP
#define SNAKE_MINUS_MINUS_MAP

#include "SnakeMinusMinusEntity.h"

#include <iostream>
#include <string>
#include <memory>
#include <vector>

using std::unique_ptr;
using std::make_unique;
using std::vector;
using std::string;

class SnakeMinusMinusMap
{
private:
	const int heigthOfMap;

	const int widthOfMap;

	vector<vector<char>> map;

	SnakeMinusMinusMap();

	void drawEntity(SnakeMinusMinusEntity& entity);

public:
	SnakeMinusMinusMap(const int heigthOfMap, const int widthOfMap);

	void render();

	void addEntity(SnakeMinusMinusEntity& entity);

	void initMapWithWalls(const int heigthOfMap, const int widthOfMap);

	void initFullWallLine(vector<char>& line, const int widthOfMap);

	void initMiddleLine(vector<char>& line, const int widthOfMap);
};


#endif