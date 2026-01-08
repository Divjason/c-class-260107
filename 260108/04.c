#include <stdio.h>

int main(void) {
	/*
	char = 문자 = 정수
	1바이트

	-> 메모리의 왼쪽 비트 단위 : 0 = 양수, 1 = 음수
	00000000
	00000001
	00000010
	00000011

	01111111 = 127

	2의 보수
	10000000

	가장 마지막번째 비트 단위 +1
	10000001 = -127

	01111111
	10000001

	*/

	// 부호 = sign
	// 부호를 사용하지 않는다 = unsigned = 양수만 사용하겠다

	//char cnum = 128;
	//unsigned char u_cnum = 128;

	//printf("%d\n", cnum);
	//printf("%d\n", u_cnum);

	char character = 'X';
	int innumber = 92;
	double dnumber = 20.201005;

	printf("%c\n", character); // %c = char, short, int
	printf("%d\n", character); // %d = char, short, int
	printf("%d\n", innumber); 
	printf("%x\n", innumber); // %x = unsigned int = 부호없는 16진수 정수
	printf("%c\n", innumber); // %o = unsigned int = 부호없는 8진수 정수
	printf("%f\n", dnumber); //  %f = float, double = 10진수 형식의 부동소수점 실수
	printf("%e\n", dnumber); // %e = float, double = 지수표기법 형식 부동소수점 실수

	return 0;
}