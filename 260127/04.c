#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef int INT;
//typedef int* PINT;
//typedef unsigned int UINT;

typedef struct
{
	int x;
	int y;
} POINT;

struct person
{
	char name[30];
	int age;
};

typedef struct person PERSON;

int main(void)
{
	//typedef char CHAR;
	//typedef char* STR;

	//INT num = 3;
	//PINT ptr = &num;
	//UINT unum = 5;

	//CHAR ch = 'C';
	//STR str = "Hello";

	//printf("%d %d %d\n", num, *ptr, unum);
	//printf("%c %s\n", ch, str);

	POINT position = { 30, 60 };

	PERSON saram = { "송태섭", 20 };

	printf("%d %d\n", position.x, position.y);
	printf("%s %d\n", saram.name, saram.age);

	return 0;
}

// 포인터
// 배열
// 포인터 배열 -> 배열 포인터 -> 함수 포인터
// 구조체
// typedef
// 구조체 이름 -> typedef 정의

/*
struct point
{
	int x;
	int y;
}

typedef struct point POINT;

POINT = {30, 60};


typedef struct
{
	int x;
	int y;
} POINT;

*/