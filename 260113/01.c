#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char alpha = 'C';

	//if (alpha == 'A') {
	//	printf("alpha is A\n");
	//	printf("I like apple.");
	//}
	//else if (alpha == 'B') {
	//	printf("alpha is B\n");
	//	printf("I like banana.");
	//}
	//else if (alpha == 'C') {
	//	printf("alpha is C\n");
	//	printf("I like carrot.");
	//}
	//else {
	//	printf("I hate fruit & vegetable");
	//}

	/*int num;
	printf("input your number : ");
	scanf("%d", &num);

	if (num == 2)
	{
		printf("your number is 2");
	}
	else if(num == 4)
	{
		printf("your number is 4");

	}
	else if (num == 8)
	{
		printf("your number is 8");

	}*/

	int n;
	printf("정수를 입력하세요! : ");
	scanf("%d", &n);

	if (n % 2 == 0)
	{
		printf("입력한 정수는 짝수입니다.");
	}
	else {
		printf("입력한 정수는 홀수입니다.");
	}

	return 0;
}

// if 조건문
// if else 조건문
// if else if else 조건문