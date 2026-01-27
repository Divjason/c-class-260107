#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct person
//{
//	char name[30];
//	int age;
//};

struct person
{
	char name[30];
	int age;
};

int main(void)
{
	//struct person boy, girl;

	//strcpy(boy.name, "홍길동");
	//strcpy(girl.name, "김미미");

	//boy.age = 12;
	//girl.age = 9;

	/*struct person boy = { "홍길동", 12 };
	struct person girl = { "김미미", 9 };

	printf("소년의 이름은 %s, 나이는 %d\n", boy.name, boy.age);
	printf("소녀의 이름은 %s, 나이는 %d\n", girl.name, girl.age);*/

	struct person boy[3] = {
		{ "홍길동", 12 },
		{ "슛돌이", 14 },
		{ "강백호", 16 },
	};

	struct person girl[3];

	strcpy(girl[0].name, "아이유");
	strcpy(girl[1].name, "송혜교");
	strcpy(girl[2].name, "전지현");

	girl[0].age = 21;
	girl[1].age = 23;
	girl[2].age = 25;

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("소년의 이름은 %s, 나이는 %d\n", boy[i].name, boy[i].age);
		printf("소녀의 이름은 %s, 나이는 %d\n", girl[i].name, girl[i].age);
	}

	return 0;
}

// 구조체
// 다양한 형태의 데이터형을 한 번에 가지고 있는 변수들의 집합!!
// 1 : 1 = 정수, 실수, 논리형, 문자
// 1 : 다수 = 배열 -> 타입이 일정하게 유지
// 구조체 : 사용자 정의 자료형
// 문자열, 배열, 정수 등
/* 

struct person -> 구조체 선언
{
	char name[30];
	int age;
}

struct person boy, girl;
-> 선언된 구조체를 활용해서 변수 정의
-> 해당 변수는 구조체 안에 있는 변수의 값을 사용할 수 있음

strcpy(boy.name, "홍길동")
strcpy(girl.name, "김미미")

boy.age = 12
girl.age = 9

구조체 배열

> 배열 : 동일한 자료형의 값을 하나로 모아놓은 자료구조!!

int iarr[3]
구조체 => 하나의 자료값
구조체로 이루어진 배열

*/