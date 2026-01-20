#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	//char bingo[3][3];
	//int i, j;

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		if (i == j) bingo[i][j] = 'O';
	//		else bingo[i][j] = 'X';
	//	}
	//}

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%c ", bingo[i][j]);
	//	}
	//	printf("\n");
	//}

	int gugu[4][9];
	int dan, i;

	for (dan = 2; dan <= 5; dan++)
	{
		for (i = 1; i <= 9; i++)
		{
			gugu[dan - 2][i - 1] = dan * i;
		}
	}

	for (dan = 0; dan < 4; dan++)
	{
		for (i = 0; i < 9; i++)
		{
			printf("%d ", gugu[dan][i]);
		}
		printf("\n");
	}
	return 0;
}

/*
3행, 3열 2차원 배열 생성
데이터 타입 char

3 x 3 의 2차원 배열 내 다음과 같이 값을 할당하시고, 출력해주세요.

O X X
X O X
X X O


/* 구구단을 출력하세요!!
- 행 4 / 열 9 -> 2차원 배열 생성
- 2단 ~ 5단 (4개행) 입력 및 출력
- 각각의 단이 -> 1개의 행이 될 수 있도록 코드 작성
- 1번째 행 = 0번째 인덱스
- 2번째 행 = 1번째 인덱스
- 1번째 열 = 0번째 인덱스
*/