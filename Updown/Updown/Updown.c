//main.c

#include "header.h"

int main(void)
{
	CursorView(0);

	while (1)
	{
		for (int i = 0; i < SIZE; i++)
		{
			GotoXY(XP, YP + i);
			printf("бр");
			system("cls");
		}
		for (int i = SIZE - 1; i >= 0; i--)
		{
			GotoXY(XP, YP + i);
			printf("бр");
			system("cls");
		}
	}
}