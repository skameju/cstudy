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
				if (*y > 0)//�׸� �� ���� ���� �� ���� ���� ���� ���ϹǷ� if���� ���� �� �ڸ��� �ְ� ���ش�.
				{
					GotoXY(*x, --(*y)); printf("��");//�׸� ����
				}
				else
				{
					GotoXY(*x, *y); printf("��");
				}
				break;
			case DOWN:
				GotoXY(*x, ++(*y)); printf("��");//�׸� �Ʒ���
				break;
			case LEFT:
				if (*x > 0)//�� ���ʿ� ���� �� ���� �������� ���� ���ϹǷ� �� �ڸ��� �ְ� ���ش�.
				{
					(*x) -= 2;
					GotoXY(*x, *y); printf("��");//�׸� ��������
				}
				else
				{
					GotoXY(*x, *y); printf("��");
				}
				break;
			case RIGHT:
				(*x) += 2;
				GotoXY(*x, *y); printf("��");//�׸� ����������
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