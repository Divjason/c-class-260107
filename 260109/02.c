#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// C언어 출력 : printf()
	// C언어 입력 : scanf()

	//char character;
	//int inum;
	//float fnum;

	//scanf("%c", &character);
	//scanf("%d", &inum);
	//scanf("%f", &fnum);

	//printf("%c %d %f \n", character, inum, fnum);

	//int num1, num2, num3;
	//float fnum1, fnum2;

	//printf("세 개의 정수를 입력:");
	//scanf("%d %d %d", &num1, &num2, &num3);
	//printf("입력된 정수들 : %d %d %d\n", num1, num2, num3);

	//printf("실수, 정수, 실수를 차례대로 입력:");
	//scanf("%f %d %f", &fnum1, &num1, &fnum2);
	//printf("입력된 값들 : %0.2f %d %0.2f\n", fnum1, num1, fnum2);

	// 형변환 : 비트, 바이트 => 1비트 1바이트 = 0, 1 => 8비트
	// cpu : 16비트
	// 2진수, 8진수, 16진수

	int num1, num2, num3;

	printf("세 개의 정수를 입력 : ");
	scanf("%o %x %d", &num1, &num2, &num3); // %o = 8진수, %x = 16진수
	printf("입력된 정수들 : %d %d %d\n", num1, num2, num3);

	// 10진수의 정수 -> 특정 진수 변환하는 방법
	// 10 :(1 * 8^1) + (0 * 8^0) = 8
	// 10 :(1 * 16^1) + (0 * 16^0) = 16
	return 0;
}