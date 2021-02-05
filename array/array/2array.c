#include <stdio.h>

int main(void)
{
	int array[4][4];
	int line = sizeof(array) / sizeof(array[0]);//행 개수 구하기
	int row = sizeof(array) / sizeof(array[0]);//열 개수 구하기
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			scanf_s("%d", &array[i][j]);
		}
	}

	printf("[변경 전]\n");
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", array[i][j]);
		}

		printf("\n");
	}

	printf("[변경 후]\n");
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", array[j][i]);
		}

		printf("\n");
	}
}