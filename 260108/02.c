#include <stdio.h>

int main(void) {
	int num = 10;
	printf("%d\n", sizeof(num));
	printf("%d\n", sizeof(100));
	printf("%d\n", sizeof(3.14));

	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int int1 = 68;

	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", int1);

	return 0;
}

// 자료형
// 문자 = 정수 : char : 1바이트 = 0, 1 = 비트 => 8개 = 1바이트 = 2^8 = 256 = -128 ~ 127
// 정수 : short 2바이트 / int 4바이트 / long 4바이트 / long long 8바이트
// int => 4바이트 = 32비트 2^32
// 운영체제 : 윈도우 long 4바이트 . 맥 long 8바이트
// 실수 : float 4바이트 / double 8바이트 / long double 8바이트
// float : 1.175494e-38 ~ 3.402823e+38
// e(exponent) = 지수표기법 = 10^-38
// float = 4바이트 = 32비트
// 32비트
// 부호 : 1비트
// 지수부 : 8비트 = 2^8 - 127 (bias)
// 가수부 : 23비트 = 2^23
// 1 / 1.000000000000000 
// 운영체제 : 윈도우 long double 8바이트 . 맥 long double 16바이트
// 메모리 중요!!