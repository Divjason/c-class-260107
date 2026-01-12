#include <stdio.h>

int main(void)
{
	//int a = 3; // 00000011
	//int b = 5; // 00000101

	//printf("3 & 5 = %d\n", a & b);
	//printf("3 | 5 = %d\n", a | b);
	//printf("3 ^ 5 = %d\n", a & b);
	//printf("~3 = %d\n", ~a);

	int a, b;
	a = 1; // 00000001

	b = a << 2; // 00000100
	printf("%d << 2 = %d\n", a, b);

	b = a >> 2; // 00000000
	printf("%d >> 2 = %d\n", a, b);

	return 0;
}

// 비트연산자
// 산술, 논리, 비교, 증감, 대입
// 실제 우리가 눈으로 볼 수 있는 정수 값들의 연산

// & (앰퍼샌드) = and
// | (버티컬바) = or
// ^ (캐럿) = XOR
// ~ = NOT