#include <stdio.h>

int main(void) {
	// 출력형태 : C언어 문법 코드 => 콘솔
	// 값이 출력될 공간 확보 -> 정렬 (왼.오른쪽)

	//char character = 'H';
	//int num = 548;

	//printf("%5c\n", character);
	//printf("%-5c\n", character);
	//printf("%10d\n", num);
	//printf("%-10d\n", num);

	float fnum = 1.234567;
	printf("%f\n", fnum); // 콘솔창에 값을 출력시켜주는 역할 함수!
	printf("%10f\n", fnum); // CRUD : Create Read Update Delete
	printf("%-10f\n", fnum);
	printf("%10.3f\n", fnum);
	printf("%-10.3f\n", fnum);

	return 0;
}