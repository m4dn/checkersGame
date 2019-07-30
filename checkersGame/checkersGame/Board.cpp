#include "Board.h"

Board::Board()
{
	reset();
}

void Board::reset()
{



	//populate the board with blank spaces / a clear board / no garbage values
	for (int emptyRow = 0; emptyRow < 8; emptyRow++)
	{
		for (int emptyCol = 0; emptyCol < 8; emptyCol++)
		{
			the_board[emptyRow].push_back(new Checker(' ', false));

		}
	}
 //populate board with red pieces.
	for (int rowRed1 = 0; rowRed1 < 3; rowRed1+=2)
	{
		for (int colRed1 = 1; colRed1 < 8; colRed1+=2)
		{
			the_board[rowRed1][colRed1]->setColor('r');
			the_board[rowRed1][colRed1]->setIsKing(0);

		}
	}
	for (int rowRed2 = 1; rowRed2 < 2; rowRed2 += 2)
	{
		for (int colRed2 = 0; colRed2 < 8; colRed2 += 2)
		{
			the_board[rowRed2][colRed2]->setColor('r');
			the_board[rowRed2][colRed2]->setIsKing(0);

		}
	}
//populate board with black pieces.
	for (int rowBlack1 = 7; rowBlack1 > 3; rowBlack1 -= 2)
	{
		for (int colBlack1 = 6; colBlack1 > -1; colBlack1 -= 2)
		{
			the_board[rowBlack1][colBlack1]->setColor('b');
			the_board[rowBlack1][colBlack1]->setIsKing(0);

		}
	}
	for (int rowBlack2 = 6; rowBlack2 > 4; rowBlack2 -= 2)
	{
		for (int colBlack2 = 7; colBlack2 > -1; colBlack2 -= 2)
		{
			the_board[rowBlack2][colBlack2]->setColor('b');
			the_board[rowBlack2][colBlack2]->setIsKing(0);

		}
	}
}

void Board::print()
{
	for (int row = 0; row < 8; row++)
	{
		cout << "----+---+---+---+---+---+---+----" << endl;
		for (int col = 0; col < 8; col++)
		{
			cout << "| " << the_board[row][col]->getColor() << " ";
		}
		cout << "|" << endl;
	}
	cout << "----+---+---+---+---+---+---+----" << endl;
}
