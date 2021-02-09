#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[3][3];
	int arr1[3][3];
	int mul[3][3] = { 0, };
	int(*ptr)[3] = arr;
	int(*ptr1)[3] = arr1;
	int(*mu)[3] = mul;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", *(ptr + i) + j);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", *(ptr1 + i) + j);
		}
	}

	printf("[행렬 A]\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(ptr + i) + j));
		}
		printf("\n");
	}

	printf("[행렬 B]\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(ptr1 + i) + j));
		}
		printf("\n");
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				*(*(mu + i) + j) += *(*(ptr + i) + k) * (*(*(ptr1 + k) + j));
			}
		}
	}

	printf("[행렬 곱]\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(mu + i) + j));
		}
		printf("\n");
	}
}