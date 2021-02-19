#include <windows.h>
#include <stdio.h>

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

int main(void)
{
	int num, x = 1, y = 1;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		GotoXY(x, y);
		printf("ㄱ");
		x += 2, y++;
	}

	return 0;
}