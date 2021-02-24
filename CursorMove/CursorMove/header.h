//header.h

#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ARROW 224

#define XP 40
#define YP 6

void Move();
void CursorDel(char show);
void GotoXY(int x, int y);

#endif