#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num, primeNumber;
	int* arr;

	printf("������ ���� : ");
	scanf("%d", &num);

	primeNumber = num;

	arr = (int*)calloc(num, sizeof(int));

	for (int i = 0; i < num; i++)
	{
		scanf("%d", arr+i);

		//�Ҽ��� �ƴ� ��� ������ �������� -1�� ����
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

	printf("�Ҽ��� ������ %d�� �Դϴ�.", primeNumber);

	free(arr);

	return 0;
}