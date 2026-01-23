#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ranNum = rand();
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", ranNum % 11);
	}

	// 0 ~ 10 -> % 11 
	return 0;
}

// 컴퓨터는 기본적으로 랜덤값을 생성할 수 없음!!
// 최초랜덤은 만들 수 있지만, 계속 무한 랜덤은 불가능!!
// 랜덤씨드 최초 유지
// 랜덤씨드, 난수값을 생성할 때마다 변경가능
// 시간 값