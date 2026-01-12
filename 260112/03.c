#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int num = 3;

	//if (num < 3) 
	//	printf("num is smaller than 3");

	//if (num == 3)
	//	printf("num is 3");

	//if (num > 3)
	//	printf("num is bigger than 3");

	char alpha = 'A';

	if (alpha == 'B')
		printf("alpha is B.");
	else
		printf("alpha is not B.");

	return 0;
}

// 1) if 조건문
// 참, 거짓 => 참 = A, 거짓 = B

// 2) 참, 거짓 => 워낙 다양, 많음
// if 조건문 else문 : 참 if / 거짓 else

// 3) 참, 거짓 => 이분법적으로 종료 x
// if else if else if else

// if 조건식 실행문

// 실행문 단문 : { } -> 생략가능
// 실행문 복문 : { } -> 생략불가능

// else문 옵션 : if else if

// else문 중간에 절대 올 수 없다 : else문 반드시 조건문의 가장 마지막에 사용!!

// if조건문 > 조건식 > 비교연산 & 논리연산자

// 중첩 if조건문 : if > if > if

// for문 + if문 => 혼합형
// 중첩 for문 (n차원 for문 & if 중첩문)