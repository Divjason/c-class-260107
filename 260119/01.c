#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char cnum = 5;
	//int inum = 999;
	//double dnum = 3.14;

	//char* cptr = &cnum;
	//char* iptr = &inum;
	//char* dptr = &dnum;

	//printf("%p\n", cptr);
	//printf("%p\n", iptr);
	//printf("%p\n", dptr);

	//int num = 10;
	//int* pnum;
	//pnum = &num;

	//*pnum = 20;
	//printf("num : %d\n", num);

	//(*pnum)++;
	//(*pnum)++;

	//printf("num : %d\n", num);
	//printf("*pnum: %d\n", *pnum);

	//int a = 10;
	//int* p = &a;

	//*p = 20;
	//printf("%d\n", a);

	//*p = 50;
	//printf("%d", a);

	//int number = 10;

	//int* pnumber = &number;

	//printf("%d\n", *pnumber);
	//printf("%p\n", pnumber);

	//int* ptr;
	//int num1 = 5;
	//int num2 = 8;

	//ptr = &num1;
	//printf("%d\n", *ptr);

	//ptr = &num2;
	//printf("%d\n", *ptr);

	int n1 = 100;
	int n2 = 200;

	int* ptr1 = &n1;
	int* ptr2 = &n2;

	printf("%d %d\n", *ptr1, *ptr2);

	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);

	return 0;
}
/*
int 자료형 변수 n1, n2를 선언 후 100, 200의 값을 각각 할당.
int 자료형의 포인터 변수 ptr1, ptr2를 선언한 후 각 n1, n2의 주소값을 저장
그리고, 포인터 변수를 활용해서 각각의 값을 교환할 수 있는 코드를 작성해주세요!
*/