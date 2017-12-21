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
