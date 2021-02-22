#include "header.h"

void LoadMaze(char num)
{
	char path[20] = "./Maze";
	strcat(path, &num);
	strcat(path, ".txt");
	//path는 ./Maze(num).txt

	char str_tmp[50] = { 0 , };
	FILE* f = fopen(&path, "r");

	for (int i = 0; i < SIZE; i++)
	{
		fgets(str_tmp, 50, f);
		char* ptr = strtok(str_tmp, "\t");
		for (int j = 0; j < SIZE; j++)
		{
			maze[i][j] = *ptr;
			ptr = strtok(NULL, "\t");//19번째줄에서 자르고 남은 문자열을 다시 반환, \t을 기준으로 자름.
		}
	}
	fclose(f);
}

void GotoXY(int x, int y)
{
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}