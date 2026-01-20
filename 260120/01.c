#define _CRT_SECURE_NO_WARNING
#include <stdio.h>

int main(void)
{
	//short sarr[2][3][4]; // short 2바이트
	//int iarr[2][3][4]; // int 4바이트

	//printf("size of sarr : %d\n", sizeof(sarr));
	//printf("size of iarr : %d\n", sizeof(iarr));

	//int i, j;

	//int arr[2][3][4] = {
	//	{
	//		{1, 2, 3, 4},
	//		{5, 6, 7, 8},
	//		{9, 10, 11, 12}
	//	},
	//	{
	//		{21, 22, 23, 24},
	//		{25, 26, 27, 28},
	//		{29, 30, 31, 32}
	//	}
	//};

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[0][i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 4; j++)
	//	{
	//		printf("%d ", arr[1][i][j]);
	//	}
	//	printf("\n");
	//}

	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	int i, j;

	int (*arrptr)[3] = arr;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arrptr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

// 포인터 : 메모리상에 저장되어있는 값을 주소를 통해서 직접접근
// 배열 : 복수의 값을 저장하는 자료구조
// 포인터 배열 : 포인터를 활용해서 생성된 배열
// 포인터 배열의 연산
// 배열 1차원 2차원
// [] // [행][열] //
// 3차원 [높이][행][열]
// 3차원 배열의 경우에는 총 24개의 값 또는 변수를 저장할 수 있음
// 메모리 공간의 크기 : sizeof()
// 포인터 배열 : 포인터 주소값을 활용해서 배열 생성
// 배열 포인터 : 배열을 가리키는 포인터 주소