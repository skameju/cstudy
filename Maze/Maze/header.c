#include "header.h"


void LoadMaze(char num)
{
    char path[20] = "./Maze";
    strcat(path, &num);
    strcat(path, ".txt");

    char str_tmp[50] = { 0, };
    FILE* f = fopen(&path, "r");

    for (int i = 0; i < SIZE; i++)
    {
        fgets(str_tmp, 50, f);
        char* ptr = strtok(str_tmp, "\t");
        for (int j = 0; j < SIZE; j++)
        {
            maze[i][j] = *ptr;
            ptr = strtok(NULL, "\t");
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

void PrintMazeGame()
{

    for (int i = 0; i < SIZE; i++)
    {
        GotoXY(XP, YP + i);
        for (int j = 0; j < SIZE; j++)
        {
            if (maze[i][j] == '1')
                printf("■");
            else if (maze[i][j] == 'y')
                printf("★");
            else if (maze[i][j] == '0')
                printf("□");
            else
                printf("●");
        }
        puts("");
    }
}

void CursorView(char show)
{
    CONSOLE_CURSOR_INFO ConsoleCursor;
    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}

void MoveMaze()
{
    int nkey;

    if (_kbhit())
    {
        nkey = _getch();

        if (nkey == ARROW)
        {
            nkey = _getch();
            switch (nkey)
            {
            case UP:
                printf("위 ");
                break;

            case DOWN:
                printf("아래 ");
                break;

            case LEFT:
                printf("왼쪽 ");
                break;

            case RIGHT:
                printf("오른쪽 ");
                break;
            }
        }

    }

}