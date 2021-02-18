#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char* str1 = malloc(sizeof(char) * 100);
	char* str2 = malloc(sizeof(char) * 100);

	gets_s(str1);
	gets_s(str2);


	if (strlen(str1) > strlen(str2))
	{
		printf("%d", strlen(str1));
	}
	else if (strlen(str1) < strlen(str2))
	{
		printf("%d", strlen(str2));
	}
	else
	{
		strcat(str1, str2);
		printf(str1);
	}

	free(str1);
	free(str2);

	return 0;
}