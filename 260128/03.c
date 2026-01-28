#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typedef struct
//{
//	int s_id;
//	int age;
//} Student;

//Student setStudent(int s_id, int age)
//{
//	Student s = { s_id, age };
//	return s;
//}
//
//void printStudent(Student s)
//{
//	printf("학번 : %d, 나이 : %d\n", s.s_id, s.age);
//}

typedef struct
{
	int xpos;
	int ypos;
} Point;

void setPosSameValue(Point* ptr)
{
	//if ((*ptr).xpos > (*ptr).ypos)
	//{
	//	(*ptr).ypos = (*ptr).xpos;
	//}

	if (ptr -> xpos > ptr -> ypos)
	{
		ptr -> ypos = ptr -> xpos;
	}
	else 
	{
		ptr->xpos = ptr->ypos;
	}
}

void printPoint(Point point)
{
	printf("x : %d, y : %d\n", point.xpos, point.ypos);
}

int main(void)
{
	//Student s = setStudent(20260128, 20);
	//printStudent(s);

	Point position1 = { 33, 66 };
	Point position2 = { 6, 3 };

	setPosSameValue(&position1);
	setPosSameValue(&position2);

	printPoint(position1);
	printPoint(position2);

	return 0;
}

// 구조체를 활용한 구조체 변수 선언
// 구조체 변수를 함수의 매개변수 = 인자값으로 전달
// 구조체 변수값을 함수의 반환값으로도 사용가능!

// 포인터 & 함수
// Call by value : 함수의 매개변수 즉 인자값으로 value
// Call by reference : 함수의 매개변수 즉 인자값으로 reference