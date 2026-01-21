#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int ch1, ch2;

	//ch1 = getchar();
	//ch2 = getchar();

	//putchar(ch1);
	//putchar(ch2);

	int ch;

	while (1)
	{
		ch = getchar();

		if (ch == EOF)
		{
			break;
		}

		putchar(ch);
	}

	return 0;
}

// printf()
// scanf()
 
// getchar()
// putchar()

// EOF 상수!! => 문자를 입력할 때, 문자의 종료 의미하는 상수
// End Of File