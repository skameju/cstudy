#include <stdio.h>

int main(void)
{
	int array[4][4];
	int line = sizeof(array) / sizeof(array[0]);//�� ���� ���ϱ�
	int row = sizeof(array) / sizeof(array[0]);//�� ���� ���ϱ�
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			scanf_s("%d", &array[i][j]);
		}
	}

	printf("[���� ��]\n");
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", array[i][j]);
		}

		printf("\n");
	}

	printf("[���� ��]\n");
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", array[j][i]);
		}

		printf("\n");
	}
}