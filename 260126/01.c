#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game(void)
{
	int user, com;

	com = rand() % 3 + 1;

	printf("가위 1, 바위 2, 보 3\n");
	printf("당신의 선택은 : ");
	scanf("%d", &user);

	char* nameUser = (user == 1) ? "가위" : (user == 2) ? "바위" : "보";
	char* nameCom = (com == 1) ? "가위" : (com == 2) ? "바위" : "보";

	if (user == com)
	{
		printf("당신은 %s, 컴퓨터는 %s, 비겼습니다.\n", nameUser, nameCom);
	}
	else if ((user == 1 && com == 3) || (user == 2 && com == 1) || (user == 3 && com == 2))
	{
		printf("당신은 %s, 컴퓨터는 %s, 이겼습니다.\n", nameUser, nameCom);
	}
	else
	{
		printf("당신은 %s, 컴퓨터는 %s, 졌습니다.\n", nameUser, nameCom);
	}
}

int main(void)
{
	srand((unsigned int)time(NULL));
	game();

	return 0;
}

// 컴퓨터와 가위.바위.보 게임
// 가위 = 1, 바위 = 2, 보 = 3 -> 0, 1, 2 + 1
// 사용자 : 직접 값
// 컴퓨터 : 매번 비규칙적인 값 (랜덤)