//header.c

#include "header.h"

void Move(int* x, int* y)
{
	int nkey;

	if (_kbhit())
	{
		nkey = _getch();

		if (nkey == ARROW)
		{
			nkey = _getch();
			GotoXY(*x, *y); printf(" ");
			switch (nkey)
			{
			case UP:
				if (*y > 0)
				{
					--(*y);
				}
				break;
			case DOWN:
				++(*y);
				break;
			case LEFT:
				if (*x > 0)
				{
					(*x) -= 2;
				}
				break;
			case RIGHT:
				(*x) += 2;
				IsFinish(*x);
				break;
			}
			GotoXY(*x, *y); printf("0");
		}
	}
}

void CursorDel(char show)
{
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void PrintLine()
{
	for (int i = 0; i < 40; i++)
	{
		GotoXY(LINE, i);
		printf("l");
	}
}

void IsFinish(int x)
{
	if (x == LINE)
	{
		system("cls");
		exit(0);
	}
}