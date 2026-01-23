#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int getDiffByValue(int a, int b)
//{
//	return a - b;
//}
//
//void callDiffByRef(int* a, int* b)
//{
//	if (*a < *b)
//	{
//		int temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}

//void swapNumbers(int *n1, int *n2, int *n3)
//{
//	int temp = *n3;
//	*n3 = *n2;
//	*n2 = *n1;
//	*n1 = temp;
//}

int recursiveSum(int n)
{
	if (n == 0) return 0;
	return n + recursiveSum(n - 1);
}

int main(void)
{
	//int number1 = 3, number2 = 10;

	//printf("getDiffByValue 결과 : %d\n", getDiffByValue(number1, number2));

	//callDiffByRef(&number1, &number2);

	//printf("callDiffByRef 후 number1 number2 결과 : %d %d\n", number1, number2);

	/*int num1 = 5, num2 = 8, num3 = 10;

	printf("함수 호출 전 num1 num2 num3 : %d %d %d\n", num1, num2, num3);

	swapNumbers(&num1, &num2, &num3);

	printf("함수 호출 후 num1 num2 num3 : %d %d %d\n", num1, num2, num3);*/

	int n;

	printf("n을 입력하세요 : ");
	scanf("%d", &n);

	int result = recursiveSum(n);
	printf("1부터 n까지의 합 : %d\n", result);

	return 0;
}

// 정수값을 가지고 있는 2개의 변수 선언.할당
// 2개의 함수를 선언.호출
// 1개의 함수 => Call by value
// 1개의 함수 => Call by reference (주소)

// 정수타입의 값을 가지고 있는 변수 3개를 선언
// 각각의 변수는 num1 = 5, num2 = 8, num3 = 3
// 변수의 값을 swap해주는 함수를 선언해서
// num1 => num2, num2 => num3, num3 => num1
// call by reference 방식(포인터 변수를 매개변수로 사용)으로 위 문제를 해결하는 코드를 작성!!

// 사용자로부터 정수값을 입력
// 입력받은 정수값을 활용해서 1부터 해당 정수까지의 합을 계산해서 출력하는 함수를 생성해주세요.
// 해당 함수는 재귀함수로 만들어서 해당 문제를 해결해주세요!
// 7 -> 1 + 2 + 3 + 4 + 5 + 6 + 7 (재귀함수를 활용해서)