#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	// 포인터 변수
	//int num = 30;
	//int *ptr;

	//ptr = &num;

	//printf(ptr);

	char cnum = 5;
	char* cptr = &cnum;
	printf("%p\n", cptr);

	return 0;
}

// 포인터?
// 메모리 공간에 직접 접근해서, 해당 메모리의 데이터를 찾아와서 연산처리진행, 출력
// 메모리 공간을 직접 제어
// 전자제품 (냉장고, 전자레인지, 기타.. 각각의 초소현 연산 장비)
// 메모리 -> 접근 값, 연산
// 변수 선언 => 활용해서 값을 찾아