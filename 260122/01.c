#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// add 함수 명시적 선언
int add(int a, int b);

int main(void)
{	
	int result;

	result = add(3, 5);

	printf("%d", result);
	return 0;
}

// add 함수기능 선언 -> 정수값을 매개변수 확정
int add(int a, int b)
{
	return a + b;
}

// 함수 = function