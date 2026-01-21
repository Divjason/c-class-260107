#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[101], s2[101];
	int i = 0;

	printf("첫 번째 문자열 입력 : ");
	while (1)
	{
		char ch = getchar();
		if (ch == '\n') break;
		s1[i++] = ch;
	}

	s1[i] = '\0';

	i = 0;
	printf("두 번째 문자열 입력 : ");
	while (1)
	{
		char ch = getchar();
		if (ch == '\n') break;
		s2[i++] = ch;
	}

	s2[i] = '\0';

	if (strlen(s1) >= strlen(s2))
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			putchar(s1[i]);
		}

		putchar('\n');

		for (i = 0; s2[i] != '\0'; i++)
		{
			putchar(s2[i]);
		}

		putchar('\n');
	}
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
		{
			putchar(s2[i]);
		}

		putchar('\n');

		for (i = 0; s1[i] != '\0'; i++)
		{
			putchar(s1[i]);
		}

		putchar('\n');
	}

	return 0;
}