//CursorMove.c

#include "header.h"

int main(void)
{
	int x = XP;
	int y = YP;

	PrintLine();
	CursorDel(0);//Ŀ�� ���ֱ�
	GotoXY(XP, YP);//Ŀ�� �ű��
	printf("0");

	while (1)
	{
		Move(&x, &y);
	}

}