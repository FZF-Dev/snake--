#include "SnakeMinusMinusMap.h"
#include "SnakeMinusMinusEntitySymbols.h"


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
	system("CLS");
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
		vector<char> currentLine = map.at(i);
		
		if (i == 0 || i == map.size())
			initFullWallLine(currentLine, widthOfMap);
		else
			initMiddleLine(currentLine, widthOfMap);
	}
}


void SnakeMinusMinusMap::initFullWallLine(vector<char> line, const int widthOfMap)
{
	line = vector<char>(widthOfMap, ENTITY_SYMBOLS::WALL);
}


void SnakeMinusMinusMap::initMiddleLine(vector<char> line, const int widthOfMap)
{
	int firstSymbolIndex = 0;
	int lastSymbolIndex = widthOfMap - 1;

	line.at(firstSymbolIndex) = ENTITY_SYMBOLS::WALL;
	line.at(lastSymbolIndex) = ENTITY_SYMBOLS::WALL;

	for(int i = firstSymbolIndex + 1; i < lastSymbolIndex; i++)
	{
		line.at(i) = ENTITY_SYMBOLS::EMPTY;
	}
}