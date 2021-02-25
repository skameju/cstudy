//CursorMove.c

#include "header.h"

int main(void)
{
	int x = XP;
	int y = YP;

	PrintLine();
	CursorDel(0);//커서 없애기
	GotoXY(XP, YP);//커서 옮기기
	printf("0");

	while (1)
	{
		Move(&x, &y);
	}

}