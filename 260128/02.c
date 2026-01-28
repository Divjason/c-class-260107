#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct
//{
//	char name[30];
//	int age;
//} Person;

//typedef struct
//{
//	int x;
//	int y;
//} Point;
//
//typedef struct
//{
//	Point* start;
//	Point* end;
//} Line;

//typedef struct
//{
//	char title[100];
//	int published;
//} Book;
//
//typedef struct
//{
//	Book book;
//} Bag;

typedef struct
{
	char title[100];
	int published;
} Book;

typedef struct
{
	Book books[3];
} Bag;

int main(void)
{
	Bag myBag = {
		{
			{"C언어", 2026},
			{"파이썬", 2025},
			{"자바", 2024}
		}
	};

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("책 제목: %s \n출간년도 : %d\n", myBag.books[i].title, myBag.books[i].published);
	}


	//Person boy = {"호날두", 35}; // 구조체 변수 -> 변수
	//Person* ptr = &boy;

	//printf("%s %d\n", (*ptr).name, (*ptr).age);
	//printf("%s %d\n", ptr->name, ptr->age);

	//int num;
	//int* ptr = &num;

	//Point p1 = {10, 8};
	//Point p2 = {20, 40};

	//Line line = {&p1, &p2};

	//printf("선의 시작점 : [%d %d]\n", line.start -> x, line.start -> y);
	//printf("선의 끝점 : [%d %d]\n", line.end->x, line.end->y);

	//Bag myBag = {
	//	{"c언어 프로그래밍", 2026}
	//};

	//printf("책 제목 : %s \n출간년도 : %d년", myBag.book.title, myBag.book.published);

	return 0;
}

// 포인터 : 변수를 거치지 않고, 직접 메모리 공간 내 변수의 값이 담긴 요소의 주소값을 확인해서 해당 값에
// 직접 접근 및 편집
// 구조체 변수 -> 메모리 값이 저장!!

// 구조체 안에 변수 선언 <= 구조체 포인터 변수