//CursorMove.c

#include "header.h"

int main(void)
{
	int x = XP;
	int y = YP;

	CursorDel(0);//Ŀ�� ���ֱ�
	GotoXY(XP, YP);//Ŀ�� �ű��
	printf("��");

	while (1)
	{
		Move(&x, &y);
	}

}