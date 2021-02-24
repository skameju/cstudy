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
			GotoXY(*x, *y); printf("  ");
			switch (nkey)
			{
			case UP:
				if (*y > 0)//네모가 맨 위에 있을 때 더는 위로 가지 못하므로 if문을 통해 그 자리에 있게 해준다.
				{
					GotoXY(*x, --(*y)); printf("□");//네모가 위로
				}
				else
				{
					GotoXY(*x, *y); printf("□");
				}
				break;
			case DOWN:
				GotoXY(*x, ++(*y)); printf("□");//네모가 아래로
				break;
			case LEFT:
				if (*x > 0)//맨 왼쪽에 있을 때 더는 왼쪽으로 가지 못하므로 그 자리에 있게 해준다.
				{
					(*x) -= 2;
					GotoXY(*x, *y); printf("□");//네모가 왼쪽으로
				}
				else
				{
					GotoXY(*x, *y); printf("□");
				}
				break;
			case RIGHT:
				(*x) += 2;
				GotoXY(*x, *y); printf("□");//네모가 오른쪽으로
				break;
			}
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