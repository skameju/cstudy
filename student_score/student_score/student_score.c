#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int student_num;
	int* student_score;
	int sum = 0, average;

	printf("�л��� �� : ");
	scanf("%d", &student_num);

	student_score = (int*)calloc(student_num, sizeof(int));

	for (int i = 0; i < student_num; i++)
	{
		printf("�л�%d : ", i+1);
		scanf("%d", student_score + i);
	}

	for (int i = 0; i < student_num; i++)
	{
		sum += *(student_score + i);
	}

	average = sum / student_num;

	printf("��� : %d", average);
	free();
	return 0;
}