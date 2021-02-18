#ifndef CALCULATOR
#define CALCULATOR
#include <stdio.h>

typedef struct _Calc 
{
	int num1;
	int num2;
}Calc;

int sum(Calc n);
int sub(Calc n);
int mul(Calc n);
int div(Calc n);

#endif