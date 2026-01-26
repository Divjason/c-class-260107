#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	double value = 3.8;
	double* ptr = &value;
	double** dptr = &ptr;

	printf("%.1f\n", **dptr);
	printf("%u\n", &dptr);
	printf("%u\n", *&ptr); // value 주소

	return 0;
}

// 자율주행 자동차의 안정성 98%
// 테슬라 미국 정부 : 위성
// 자동차공학부 & 컴퓨터공학부 : 자율주행 자동차 = 컴퓨터 / 정비소 X
// 정비소 -> X, 계기판
// 택시, 버스 운전기사
// 위성 => 배차, 사고
// 보험사 => 사고


