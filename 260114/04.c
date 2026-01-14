#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zodiac_by_date(int m, int d) {
	if ((m == 3 && d >= 21) || (m == 4 && d <= 19)) return 0;
	if ((m == 4 && d >= 20) || (m == 5 && d <= 20)) return 1;
	if ((m == 5 && d >= 21) || (m == 6 && d <= 21)) return 0;
	if ((m == 6 && d >= 22) || (m == 7 && d <= 22)) return 0;
	if ((m == 7 && d >= 23) || (m == 8 && d <= 22)) return 0;
	if ((m == 8 && d >= 23) || (m == 9 && d <= 23)) return 0;
	if ((m == 9 && d >= 24) || (m == 10 && d <= 22)) return 0;
	return -1;
}

int main(void)
{
	int m, d;

	printf("태어난 월과 일을 입력해주세요 (예 : 7 26) : ");
	if (scanf("%d %d", &m, &d) != 2)
	{
		printf("입력오류입니다.\n");
		return 0;
	}


		
	return 0;
}