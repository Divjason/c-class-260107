#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct coffee {
//	char origin[30];
//	int price;
//	char barista[20];
//};

typedef struct {
	char name[20];
	char phone[20];
	int salary;
} WORKER;

int main(void)
{
	WORKER arr[3];

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("직원의 이름 : ");
		scanf("%s", arr[i].name);

		printf("직원의 전화번호 : ");
		scanf("%s", arr[i].phone);

		printf("직원의 월급여 : ");
		scanf("%d", &arr[i].salary);
	}

	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("직원%d의 이름 : %s\n", i + 1, arr[i].name);
		printf("직원%d의 전화번호 : %s\n", i + 1, arr[i].phone);
		printf("직원%d의 월급여 : %d\n\n", i + 1, arr[i].salary);
	}

	return 0;
}

// 구조체 응용문제!!!
// 복수의 변수를 사용할 수 있는 사용자 정의 자료구조
// 정수, 문자열, 배열 등

// typedef -> 부르는 명칭에 + @ 추가적으로 명칭 생성 부르는 것

// 구조체 배열 -> 구조체형태의 값으로 구성되어있는 배열