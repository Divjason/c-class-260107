#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int getBigger(int n1, int n2)
//{
//	if (n1 > n2) return n1; // 반환 = 전달 = 종료
//	else if (n1 < n2) return n2;
//	else return 0;
//}

// 입력값 & 반환값이 존재하지 않는 경우
void guide(void)
{
	printf("inputNumber 함수를 통해서 정수를 입력할 수 있습니다.\n");
	printf("printNumber 함수를 통해서 정수를 출력할 수 있습니다.\n");
}

// 입력값만 존재하는 경우
void inputNumber(int num)
{
	printf("당신이 입력한 정수는 %d 입니다.\n", num);
}

// 반환값만 존재하는 경우
int printNumber(void)
{
	int num;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &num);

	return num;
}

int main(void)
{
	/*int result;

	result = getBigger(3, 5);
	printf("첫 번째 결과 : %d\n", result);

	result = getBigger(8, 2);
	printf("두 번째 결과 : %d\n", result);

	result = getBigger(4, 4);
	printf("세 번째 결과 : %d\n", result);*/

	guide();
	//int num = inputNumber(10);
	inputNumber(10);
	int num = printNumber();
	printf(num);

	return 0;
}