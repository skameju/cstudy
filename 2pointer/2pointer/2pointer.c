#include <stdio.h>

void max(int** m, int size, int arr[]);

int main(void)
{
	int arr[5];
	int* pointer = arr;
	int** point = &pointer;
	int size = 5;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	max(point, size, arr);
}

void max(int** m, int size, int arr[])
{
	for (int i = 0; i < size - 1; i++)
	{
		if ((**m) < arr[i + 1])
		{
			*m = arr + i + 1;
		}
	}
	printf("ÃÖ´ñ°ª : %d\n", **m);
}