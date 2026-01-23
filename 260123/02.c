#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int readArray(int* arr, int length)
//{
//	int i;
//	printf("배열의 요소 읽어보기 : [ ");
//
//	for (i = 0; i < length; i++)
//	{
//		printf("%d", arr[i]);
//		if (i + 1 < length)
//		{
//			printf(", ");
//		}
//		else 
//		{
//			printf(" ");
//		}
//	};
//
//	printf("]\n");
//}

// 서로다른 두개의 정수를 각각 변수에 할당
// 해당 변수에 입력된 정수를 교환

//void swapNumber(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	printf("함수 안에서 확인한 결과, num1:%d, num2:%d\n", num1, num2);
//}

//void swapNumber(int* ptr1, int* ptr2)
//{
//	int temp = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = temp;
//
//	printf("함수 안에서 확인한 결과, num1: %d, num2: %d\n", *ptr1, *ptr2);
//}

//void sayHello()
//{
//	printf("Hello!\n");
//	sayHello();
//}

int sayHello(int count)
{
	printf("Hello!\n");

	if (count != 3)
	{
		sayHello(count + 1);
	}

	return 0;
}

int main(void)
{
	//int arr[3] = {3, 6, 9};
	//readArray(arr, 3);

	//int num1 = 33, num2 = 99;
	//swapNumber(num1, num2);
	//printf("함수 호출 완료 후 확인한 결과, num1:%d, num2:%d", num1, num2);

	/*int num1 = 33, num2 = 99;
	swapNumber(&num1, &num2);
	printf("함수 호출 완료 후 확인한 결과, num1:%d, num2:%d", num1, num2);*/

	sayHello(1);

	return 0;
}

// 함수, 값을 반환, 인자값을 받을 수 있음
// 함수 매개변수 -> 배열의 값을 받는 경우
// 함수에 값을 입력해서 출력하는 방식
// Call by value : 직접 매개변수 혹은 인자값으로 값을 전달
// Call by reference : 매개변수가 될 요소의 주소값을 전달

// 재귀함수 : 자료구조 & 알고리즘
// 상향식 & 하향식 : 하향식 재귀함수
// 연산을 실행하고는 본인을 연산식에 다시 가져와서 연산