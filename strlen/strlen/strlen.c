#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[100];
	char str2[100];

	gets_s(str1, sizeof(str1));
	gets_s(str2, sizeof(str2));


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


	return 0;
}