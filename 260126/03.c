#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void swapNumber(int **dptr1, int **dptr2)
//{
//	int* temp = *dptr1;
//	*dptr1 = *dptr2;
//	*dptr2 = temp;
//}

int myFunc(int num1, int num2)
{
	printf("num1 : %d, num2 : %d\n", num1, num2);
}

int main(void)
{
	//int num = 3;

	//int* ptr1 = &num;

	//int** dptr = &ptr1;

	//printf("%p %p\n", ptr1, dptr);
	//printf("%d %d\n", num, **dptr);

	//int* ptr2;
	//ptr2 = *dptr;

	//*ptr2 = 9;
	//printf("%d %d\n", num, **dptr);

	/*int num1 = 66, num2 = 99;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("*ptr1 : %d *ptr2 : %d\n", *ptr1, *ptr2);

	swapNumber(&ptr1, &ptr2);

	printf("*ptr1 : %d *ptr2 : %d\n", * ptr1, * ptr2);*/

	//int num = 999;
	//int* ptr = &num;
	//int** dptr = &ptr;
	//int*** tptr = &dptr;

	//printf("%d %d %d %d\n", num, *ptr, **dptr, ***tptr);

	int (*fptr)(int, int); // 함수포인터 fptr 선언

	fptr = myFunc;
	fptr(9, 6);

	return 0;
}

// 포인터 변수
// 배열
// 포인터 배열
// 배열 포인터
// 다중 포인터
// 함수 포인터 : 함수 -> 메모리 공간 저장 // 주소 // 함수 주소 => 함수 포인터