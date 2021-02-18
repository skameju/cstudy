#include <stdio.h>

#include "calculator.h"

int main(void)
{
	Calc n;

	scanf_s("%d", &n.num1);
	scanf_s("%d", &n.num2);

	printf("%d + %d = %d\n", n.num1, n.num2, sum(n));
	printf("%d - %d = %d\n", n.num1, n.num2, sub(n));
	printf("%d * %d = %d\n", n.num1, n.num2, mul(n));
	printf("%d / %d = %d\n", n.num1, n.num2, div(n));

	return 0;
}