#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct
//{
//	char name[30];
//	int age;
//	double height;
//} PERSON;

//typedef struct
//{
//	int xpos;
//	int ypos;
//}Point;
//
//void swapPoint(Point *p1, Point *p2)
//{
//	Point temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}

int main(void)
{
	//PERSON person = { "손오공", 30, 180.35 };
	//PERSON* ptr = &person;

	//printf("이름 : %s\n", ptr->name);
	//printf("나이 : %d\n", ptr->age);
	//printf("키 : %.2f\n", ptr->height);

	//Point position1 = {3, 6};
	//Point position2 = {4, 9};

	//swapPoint(&position1, &position2);

	//printf("position1 : %d %d\n", position1.xpos, position1.ypos);
	//printf("position2 : %d %d\n", position2.xpos, position2.ypos);

	return 0;
}

// 위 구조체 멤버변수를 대상으로 저장된 값을 서로 swap 하는 함수를 정의하고, 해당 함수를 통해서 출력