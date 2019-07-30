#include <iostream>
#include <vector>
#include "Checker.h"
using namespace std;
class Board
{
public:
	Board();
	void reset();
	void print();
private:
	vector<vector<Checker*>> the_board;

};