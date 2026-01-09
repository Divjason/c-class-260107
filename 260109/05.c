#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1 = 20, num2 = 10;
	int result;

	result = 1 && 1; // 1 => truthy
	printf("result 1 : %d\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result 2: %d\n", result);

	result = num1 > num2 && num1 == num2;
	printf("result 3: %d\n", result);

	return 0;
}

// 고급 연산자
// 1) 논리 (boolean) 연산자
// True / False
// && : and 연산자 => A && B => 좌항(A) true, 우항(B) true
// || : or 연산자 => A || B => 좌항(A) true, 우항(B) false
// ! : not 연산자 => true -> false / false -> true

// 2) 삼항조건 연산자 (문 x, 식)
// 조건 ? 결과1 : 결과2
// if 조건문!!