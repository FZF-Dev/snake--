#ifndef SNAKE_MINUS_MINUS_ENTITY
#define SNAKE_MINUS_MINUS_ENTITY


class SnakeMinusMinusEntity
{
private:
	int x;
	int y;
	char symbol;

	SnakeMinusMinusEntity();

public:
	SnakeMinusMinusEntity(const int x, const int y, const char symbol);

	char symbol();
	void symbol(char symbol);

	void setCoords(const int x, const int y);

	int x();
	void x(const int x);

	int y();
	void y(const int x);
};


#endif