#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int arr1[10]; // 1차원 배열
	//int arr2[5][3]; // 2차원 배열 (가로, 세로)
	//int arr3[2][3][4]; // 3차원 배열 (높이, 가로, 세로)

	int i, j;
	int arr[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			arr[i][j] = 10;
		}
	}

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}