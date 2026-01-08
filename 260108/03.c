#include <stdio.h>
#define LENGTH 10

int main(void) {
	// 변수
	// 상수
	// 리터럴 상수, 심볼릭 상수, 매크로 상수

	//int number = 3;
	//const int NUMBER = 5;

	//printf("%d\n", LENGTH);
	//printf("%d\n", NUMBER);
	//printf("%d\n", number);

	// 자료형 변환
	// 연산처리 => 동일한 형태의 자료형 연산
	// 형변환 => 1) 자동형변환 // 2) 명시적형변환

	double number1 = 10;
	int number2 = 1.2345;
	short number3 = 70000; // 2바이트 = 16비트

	printf("%f\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);

	printf("%d\n", (short)3.1415);
	printf("%d\n", (int)3.1415);
	printf("%f\n", (double)10);
	printf("%f\n", (float)10);

	return 0;
}