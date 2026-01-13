#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int num1 = 5, num2 = 8;

	//if (num2 > 5)
	//{
	//	if (num1 == 5)
	//	{
	//		printf("The first if state!");
	//	}
	//}

	//if (num2 < 5)
	//{
	//	if (num1 == 5)
	//	{
	//		printf("The second if state!");
	//	}
	//}

	int num;
	printf("input some positive number : ");
	scanf("%d", &num);

	//switch (num)
	//{
	//	case 1:
	//		printf("num is 1\n");
	//		break;
	//	case 2:
	//		printf("num is 2\n");
	//		break;
	//	case 3:
	//		printf("num is 3\n");
	//		break;
	//	default :
	//		printf("maybe bigger than 3\n");
	//		break;
	//}

	switch (num)
	{
	case 1:
	case 3:
	case 5:
		printf("num is odd\n");
		break;
	case 2:
	case 4:
	case 6:
		printf("num is even\n");
		break;
	default:
		printf("maybe bigger than 3\n");
		break;
	}
	printf("switch state end.");
	return 0;
}

// switch : 여러가지 후보군 중 하나의 값이 선택되었을 때
// if else if else if : 여러가지 후보군 중 하나인것은 맞지만, 구문의 첫번째 문장부터 조건식 검증

/*
switch(조건식)
{
	case 1 :
		- 무언가 실행
		break;

	case 2 :
		- 무언가 실행
		break;

	default :
		위에서 언급한 케이스에 하나도 충족되지 않은 경우
		break;
}
*/

// switch  구문을 급하게 사용하다보면, break 문을 빼먹는 경우 많음
// 앞에서 구현된 case문 종료 후 뒤에있는 case문 까지 실행됨