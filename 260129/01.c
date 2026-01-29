#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	char name[20];
} Student;

int main(void)
{
	Student students[10];
	int count = 0;
	int menu, i, id;

	while (1)
	{
		printf("==== 메뉴 ====\n");
		printf("1. 입력\n2. 출력\n3. 검색\n4. 삭제\n0. 종료\n");
		printf("당신의 선택: ");
		scanf("%d", &menu);

		if (menu == 0) break;

		switch (menu)
		{
		case 1:
			printf("학생 번호 : ");
			scanf("%d", &students[count].id);

			printf("학생 이름 : ");
			scanf("%s", students[count].name);
			count++;
			break;

		case 2:
			for (i = 0; i < count; i++)
			{
				printf("학생 번호: %d 학생 이름: %s\n", students[i].id, students[i].name);
			}
			break;

		case 3:
			printf("검색할 학생 번호 : ");
			scanf("%d", &id);

			for (i = 0; i < count; i++)
			{
				if (students[i].id == id)
				{
					printf("학생 번호 : %d 학생 이름 : %s\n", students[i].id, students[i].name);
				}
			}
			break;

		case 4:
			printf("삭제할 학생 번호 : ");
			scanf("%d", &id);

			for (i = 0; i < count; i++)
			{
				if (students[i].id == id)
				{
					students[i] = students[count - 1];
					count--;
					break;
				}
			}
			break;
		}
	}
	return 0;
}

// CRUD => U x => 기능구현
// 학생 정보 자료 생성 : C
// 삭제 & 검색 : D & R
// 학생 이름,번호 => 입력대상

// 학생 정보값을 입력할 대상!!
// 구조체 생성!!