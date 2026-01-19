#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int arr[5] = { 10, 20, 30, 40, 50 };

	//int* ptr = arr;

	//for (int i = 0; i < 5; i++) {
	//	printf("%d\n", *ptr);
	//	ptr++;
	//}

	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	int* pStart = arr;
	int* pEnd = &arr[7];
	int temp;

	while (pStart < pEnd )
	{
		temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}

	for (int i = 0; i < 8; i++)
	{
		printf("%d ", arr[i]);
	}


	//int sum = 0;

	//for (int i = 0; i < 8; i++)
	//{
	//	if (*ptr % 2 == 1)
	//	{
	//		sum += *ptr;
	//	}
	//	ptr--;
	//}

	//printf("배열 요소 중 홀수의 총합은 : %d", sum);

	return 0;
}

/*
길이가 5이 arr 배열을 선언
10, 20, 30, 40, 50
해당 배열의 첫번째 아이템 요소의 주소를 포인터 변수 ptr선언후 할당
ptr 포인터 변수를 연산자를 활용해서 나머지 변수의 값을 출력하도록 하는 코드 작성!!

길이가 8인 배열 arr을 선언
1, 2, 3, 4, 5, 6, 7, 8 할당
해당 배열의 마지막번째 아이템의 주소값을 할당한 포인터 변수 ptr을 선언
ptr이라는 포인터 변수의 연산처리를 통해서 모든 배열의 값이 확인할 수 있도록 하되,
홀수값만 추출해서 해당 값들의 총합을 최종적으로 출력 => 16

길이가 8인 배열 arr을 선언
1 ~ 8까지의 정수를 할당
해당 배열의 첫번째 아이템의 주소를 포인터 변수를 찾아오시고, 마지막번째 아이템의 주소를 포인터 변수로
찾아온 후 두 포인터 변수를 활용해서 해당 배열을 역순으로 재출력해주세요.
{1, 2, 3, 4, 5, 6, 7, 8}
{8, 7, 6, 5, 4, 3, 2, 1}
*/