#include "calculator.h"

int sum(Calc n)
{
	return n.num1 + n.num2;
}

int sub(Calc n)
{
	return n.num1 - n.num2;
}

int mul(Calc n)
{
	return n.num1 * n.num2;
}

int div(Calc n)
{
	return n.num1 / n.num2;
}
