#include "SnakeMinusMinusMap.h"
#include "SnakeMinusMinusEntitySymbols.h"
#include "SnakeMinusMinusConsoleOperations.h"


SnakeMinusMinusMap::SnakeMinusMinusMap(const int heigthOfMap, const int widthOfMap)
	: heigthOfMap(heigthOfMap), widthOfMap(widthOfMap)
{
	initMapWithWalls(heigthOfMap, widthOfMap);
}

void SnakeMinusMinusMap::render()
{
	string toRender;

	for(vector<char> currentLine : map)
	{
		for(char currentSymbol : currentLine)
		{
			toRender += currentSymbol;
		}
		toRender += '\n';
	}
	
	consoleutils::cls();

	std::cout << toRender;
}


void SnakeMinusMinusMap::drawEntity()
{

}


void SnakeMinusMinusMap::initMapWithWalls(const int heigthOfMap, const int widthOfMap)
{
	map = vector<vector<char>>(heigthOfMap, vector<char>());

	for(int i = 0; i < heigthOfMap; i++)
	{
		vector<char>& currentLine = map.at(i);
		
		if (i == 0 || i == map.size() - 1)
			initFullWallLine(currentLine, widthOfMap);
		else
			initMiddleLine(currentLine, widthOfMap);
	}
}


void SnakeMinusMinusMap::initFullWallLine(vector<char>& line, const int widthOfMap)
{
	line = vector<char>(widthOfMap, entitysymbols::WALL);
}


void SnakeMinusMinusMap::initMiddleLine(vector<char>& line, const int widthOfMap)
{
	line.push_back(entitysymbols::WALL);
	
	for(int i = 1; i < widthOfMap - 1; i++)
	{
		line.push_back(entitysymbols::EMPTY);
	}
	
	line.push_back(entitysymbols::WALL);
}