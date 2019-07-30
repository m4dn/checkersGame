#include "Checker.h"

Checker::Checker(const char& color, const bool& isKing) : color(color), isKing(isKing)
{
}
char Checker::getColor() const
{
	return this->color;
}
bool Checker::getIsKing() const
{
	return this->isKing;
}

void Checker::setColor(char color)
{
	this->color = color;
}

void Checker::setIsKing(bool isKing)
{
	this->isKing = isKing;
}
