#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int myArr[3] = {1, 2, 3};
	//printf("배열 각 요소의 주소 확인!\n");

	//printf("배열의 이름 : %p\n", myArr);
	//printf("첫번째 요소 : %p\n", &myArr[0]);
	//printf("두번째 요소 : %p\n", &myArr[1]);
	//printf("세번째 요소 : %p\n", &myArr[2]);

	//short sarr[3] = { 1, 2, 3 };
	//int iarr[3] = { 10, 20, 30 };

	//printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
	//printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

	//printf("%d %d %d\n", *sarr, *(sarr + 1), *(sarr + 2));
	//printf("%d %d %d\n", *iarr, *(iarr + 1), *(iarr + 2));

	//printf("%p %p %p\n", &sarr[0], &sarr[1], &sarr[2]);
	//printf("%p %p %p\n", &iarr[0], &iarr[1], &iarr[2]);

	int n1 = 3, n2 = 6, n3 = 9;

	int* ptr1 = &n1;
	int* ptr2 = &n2;
	int* ptr3 = &n3;

	int* parr[3] = { ptr1, ptr2, ptr3 };

	printf("%d %d %d\n", *parr[0], *parr[1], *parr[2]);
	printf("%p %p %p\n", parr[0], parr[1], parr[2]);

	return 0;
}

// 배열 : 1:1 단일값 -> 한번에 여러개의 값을 할당
// 포인터 : 생성된 변수의 주소값에 직접 접근 -> 제어 & 연산
// 코테 단골 시험 : 자료구조 & 알고리즘
// 어떤 문제 => 해결할 수 있는 코드를 작성 => 결과 도출
// 10
// 1 * 10, 2 * 5, 1 + 2 + 3 + 4
// 시간복잡도 = 코드가 문제 해결 걸리는 시간
// 반복 => 100, 1 ~ 2 // 100, 50 // 100 99
// 반복문을 가장 비효율적으로 사용했을 때를 공통 기준 : 빅오표기법
// 프로그래밍 시간 많이 소비 : 단순 연산 x // 반복문 & 제곱근
// 반복문 사용횟수 + 제곱 연산 => 시간
// 프로그래밍의 관점에서 문제 해결능력 측정
// 컴퓨터 = 하드웨어의 영향

// 반복문 : 배열, 리스트 컴퓨터 메모리 공간에 산발적으로 흩어져 있는 변수의 주소값을 하나로 이어놓은 자료구조
// 커스텀 : 배열과 같은 형태 및 기능을 가질 수 있도록 => 연결리스트

// 포인터 배열 : 포인터값을 활용해서 배열 선언
// 배열 포인터 : 배열의 포인터 값을 활용