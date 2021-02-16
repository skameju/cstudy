#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num, primeNumber;
	int* arr;

	printf("숫자의 개수 : ");
	scanf("%d", &num);

	primeNumber = num;

	arr = (int*)calloc(num, sizeof(int));

	for (int i = 0; i < num; i++)
	{
		scanf("%d", arr+i);

		//소수가 아닐 경우 숫자의 개수에서 -1을 해줌
		if (arr[i] == 1)
		{
			primeNumber--;
		}
		else
		{
			for (int j = 2; j <= arr[i] / 2; j++)
			{
				if (arr[i] % j == 0)
				{
					primeNumber--;
					break;
				}
			}
		}
	}

	printf("소수의 개수는 %d개 입니다.", primeNumber);

	free(arr);

	return 0;
}