#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//double cm_to_m(int cm)
//{
//	return cm / 100.0;
//}

void convert_time(int sec)
{
	int hour = sec / 3600;
	int min = (sec % 3600) / 60;
	int second = sec % 60;

	printf("결과 : %d시간 %d분 %d초\n", hour, min, second);
}

int main(void)
{
	/*int height;

	printf("키를 cm 단위로 입력해주세요 : ");
	scanf("%d", &height);

	printf("결과 : %.2f m\n", cm_to_m(height));*/

	int sec;

	printf("몇 초 : ");
	scanf("%d", &sec);

	convert_time(sec);

	return 0;
}

// 사용자에게 키를 입력 (cm)
// m단위로 출력!!

// 사용자로부터 초(second)를 입력받아서 시/분/초 형태로 출력해주세요.
// 해당 값으로 변경시켜주는 함수를 선언해서 해당 문제를 해결해주세요.