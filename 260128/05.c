#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* createArr(int arr[], int num, int length)
{
	/*int *newArr */
}

int main(void)
{
	int arr[3] = { 1, 5, 7 };
	int lengh = 3;
	int num = 3;

	int* ptr;
	int i;

	return 0;
}

// 동적 메모리 할당을 통해서, 기존 배열 1, 5, 7에서 오름차순 정렬 기준으로 3이라는 값이
// 중간에 적절하게 삽입될 수 있도록 코드를 작성해주세요.
// 함수 createArr 함수를 선언, 호출 -> 1, 3, 5, 7
// malloc