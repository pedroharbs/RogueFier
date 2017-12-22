/**
 * \file
 * \brief RogueFier - v1.0 Beta 
 * \author João Pedro HArbs
 * \author Jailson Smidi dos Reis
 * \version 1.0 Beta
 * \date 21 dezembro 2017
*/

#include "Mover.h"

void MoveCursor(int cursorX, int cursorY)
{
	COORD CursorPosicao;
	CursorPosicao.X = cursorX;
	CursorPosicao.Y = cursorY;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosicao);
}

void tCor(int cO)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cO);
}
