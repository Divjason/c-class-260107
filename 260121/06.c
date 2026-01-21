#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 함수의 선언부
int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int result;

	// 함수의 호출부
	result = add(3, 5);

	printf("함수가 반환한 값 : %d\n", result);
	return 0;
}

// 함수 = function = 기능
// input & output 기능
// 어떤 값을 입력한 후, 해당 값의 연산처리를 통해서 어떤 값을 출력하도록 만들어낸 기능
// 프로그래밍 언어의 꽃