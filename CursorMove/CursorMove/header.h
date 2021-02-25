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

#define XP 2
#define YP 2
#define LINE 30
void Move(int* x, int* y);
void CursorDel(char show);
void GotoXY(int x, int y);
void PrintLine();
void IsFinish();

#endif