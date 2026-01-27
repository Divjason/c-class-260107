#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int firstFunc(int a, int b);
double secondFunc(double d);

int main(void)
{
	//int a = 33, b = 66;
	//int* pa = &a;
	//int* pb = &b;
	//int** ppa = &pa;
	//int** ppb = &pb;

	//int* ptr;

	//ptr = *ppb;
	//*ppb = *ppa;
	//*ppa = ptr;

	//printf("%d %d %d %d\n", a, b, *pa,*pb);

	int (*first)(int, int);
	double (*second)(double);

	first = firstFunc;
	second = secondFunc;

	return 0;
}
// 함수 역시, 선언과 동시에 메모리 공간 값이 저장 -> 값의 주소를 찾아올 수 있다
// 함수 포인터