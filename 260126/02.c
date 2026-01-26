#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void asc(int arr[], int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("== 오름차순 정렬 함수 호출 ==\n");

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

void desc(int arr[], int size)
{
	int i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	printf("== 내림차순 정렬 함수 호출 ==\n");

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}

int main(void)
{
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("배열 요소 %d 입력:", i + 1);
		scanf("%d", &arr[i]);
	}

	asc(arr, 5);
	desc(arr, 5);

	return 0;
}

// 사용자에게 5개의 정수를 입력받으세요.
// 해당 값을 내림차순 혹은 오름차순으로 정렬시켜주는 2개의 함수를 선언 및 정의하시고,
// 해당 함수를 활용한 결과값을 출력해주세요!
// 알고리즘 => 최소값, 최대값 => temp 상대적으로 값
// 앞에있는 값, 뒤에오는 값을 비교해서 상대적으로 크냐, 작냐 위치 바꿔주기

// 자료구조 이해도 꽤 중요하게 적용된 문제
// 앞, 뒤 -> 대수비교 구분?
// 수동 x 자동 반복 -> 반복 (이터러블한 요소)
// 인덱스 값 => 배열

// 결론, 사용자에게 값을 받을 때마다 배열의 아이템으로 저장
// 반복문 & 배열