#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // C언어에서 랜덤값을 생성해줄 수 있도록 모듈
#include <time.h> // 현시점의 시간값을 가져올 수 있도록

int main(void)
{
	int user, com, userWin = 0, comWin = 0;

	srand(time(NULL));
	printf("=== 가위(0) 바위(1) 보(2) - 3판 2선승 ===\n");

	while (userWin < 2 && comWin < 2)
	{
		printf("당신의 선택은 (0:가위, 1:바위, 2:보) : ");
		if (scanf("%d", &user) != 1 || user < 0 || user > 2)
		{
			printf("입력이 올바르지 않습니다.\n");
			return 0;
		}

		com = rand() % 3;
		printf("컴퓨터 : %d\n", com);

		if (user == com)
		{
			printf("비겼습니다. 다시!\n");
			continue;
		}

		if ((user == 0 && com == 2) || (user == 1 && com == 0) || (user == 2 && com == 1))
		{
			userWin++;
			printf("당신이 이겼습니다. (%d : %d)\n", userWin, comWin);
		}
		else
		{
			comWin++;
			printf("컴퓨터 승! (%d : %d)\n", userWin, comWin);
		}
	}

	printf("최종결과 : %s\n", (userWin == 2) ? "당신의 승리!" : "컴퓨터의 승리!");
	return 0;
}

/*
1. 컴퓨터와 가위 바위 보 게임
- 사용자가 가위, 바위, 보 중 하나를 선택할 수 있도록 한다
- 사용자가 무언가를 선택할 때, 컴퓨터도 랜덤으로 이 중 하나를 선택하게 한다
- 사용자의 선택, 컴퓨터의 선택값을 비교해서 누가 이겼는지 판단한다
- 승부의 결과값을 출력한다
- 인간은 자연어 // 컴퓨터 기계어 (가위 = 0, 바위 = 1, 보 = 2)
*/