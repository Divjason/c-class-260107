#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // C언어에서 랜덤값을 생성해줄 수 있도록 모듈
#include <time.h> // 현시점의 시간값을 가져올 수 있도록

int main(void)
{
	// 컴퓨터는 완벽한 랜덤값 생성이 불가
	// A라는 값을 입력 => 규칙 => 변환 값 98
	// A => 98 (완벽한 x)
	// 매번 랜덤값을 생성하려면, 매번 입력값도 새로운 값 전제조건
	// 시간 => 1분 1초 => 1970년 1월 1일 -> 1초 = 1000밀리초
	// 랜덤 씨드 seed

	int answer, guess, count = 0;

	srand(time(NULL));

	answer = rand() % 100 + 1; // 1 ~ 100까지의 랜덤 숫자
	printf("정답은 %d\n", answer);

	printf("1부터 100사이의 숫자를 맞춰보세요!\n");

	while (1)
	{
		printf("입력: ");
		scanf("%d", &guess);
		count++;

		if (guess > answer)
		{
			printf("더 작은 수 입니다!\n");
		}
		else if (guess < answer)
		{
			printf("더 큰 수 입니다!\n");
		}
		else
		{
			printf("정답니다! %d번 만에 맞추셨습니다.\n", count);
			break;
		}
	}
	return 0;
}

/*
1. 숫자 맞추기 게임
> 랜덤으로 숫자를 하나 생성
> 사용자가 어떤 값을 입력했을 때, 생성된 값보다 큰지, 작은지 비교
> 크다, 작다 출력문
> 범위를 좁혀가면서 최종적으로 정답 맞추는 게임
> 몇 번만에 정답을 맞추었는가
*/