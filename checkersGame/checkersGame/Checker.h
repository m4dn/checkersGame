#pragma once
#include <string>
class Checker
{
public:
	Checker(const char& color, const bool& isKing);
	char getColor() const;
	bool getIsKing() const;
	void setColor(char color);
	void setIsKing(bool isKing);
private:
	bool isKing;
	char color;
};