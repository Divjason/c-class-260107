#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int localFunc(int num)
//{
//	int result = 0;
//	return result + num;
//}

//int number = 0;
//
//void printNumber(void)
//{
//	printf("전역 변수 number는 %d을 저장하고 있다.\n", number);
//}

void increaseNumber()
{
	static int number = 0;
	//int number = 0;
	number++;
	printf("number : %d\n", number);
}

int main(void)
{
	//int num = 5;
	//int result = localFunc(num);

	//printf("결과 : %d\n", result);
	//int number = 3;

	//printf("지역 변수 number는 %d을 저장하고 있다.\n", number);
	//printNumber();

	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}

/*
C언어는 컴퓨터의 RAM (메모리영역)

1. Code : 작성된 코드들
2. Data : 전역변수, static변수
3. Stack : 지역변수 (*필요에 따라서 생성, 소멸)
4. Heap : 개발자의 요청에 따라서 필요한 값을 등록해서 관리

> 설거지, 엘리베이터
> 메모리 관리 > Stack
> 오타, 잘못된 기능

지역변수 > 변수가 선언된 지역안에서만 사용가능!
변수가 선언된 함수가 종료되었지만, 여전히 지역변수가 살아있어야 하는 경우 -> 변수를 끌어와야 하는경우!

해당 함수가 종료되었지만, 개발자가 직접 해당 변수의 생성 및 소멸을 직접 관리하고자 할 때, static 변수
*/