#include <stdio.h>

int sum(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int wrong(int a, int b);
int main(void)
{
	int (*fptr)(int, int);
	int a, b;
	char operation;

	printf("연산 종류 (+, -, *, /) : ");
	scanf_s("%c", &operation);

	printf("a : ");
	scanf_s("%d", &a);
	printf("b : ");
	scanf_s("%d", &b);

	fptr = wrong;
	switch(operation)
	{
		case '+':
			fptr = sum;
			break;
		case '-':
			fptr = subtraction;
			break;
		case '*':
			fptr = multiplication;
			break;
		case '/':
			fptr = division;
			break;
	}
	if (fptr != wrong) printf("%d %c %d : %d", a, operation, b, fptr(a, b));
	else fptr(a,b);
}
int wrong(int a, int b)
{
	printf("잘못된 연산 기호 입니다.");
	return 0;
}
int sum(int a, int b)
{
	return a + b;
}
int subtraction(int a, int b)
{
	return a - b;
}
int multiplication(int a, int b)
{
	return a * b;
}
int division(int a, int b)
{
	return a / b;
}