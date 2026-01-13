#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//int num = 0;

	//while (num < 3)
	//{
	//	printf("num is %d now\n", num);
	//	num++;
	//}

	//int num = 0;

	//while (num != -1)
	//{
	//	printf("숫자를 입력하세요(-1 입력 시, 종료) :");
	//	scanf("%d", &num);

	//	if (num == -1) printf("종료합니다.");
	//	else printf("%d(을)를 입력하셨네요.", num);
	//}

	//int num = 1;

	//do {
	//	printf("%d\n", num);
	//	num++;
	//} while (num < 3);

	//int num = -1;

	//do {
	//	printf("-1 입력 시, 종료 :");
	//	scanf("%d", &num);
	//} while (num != -1);

	//int i;

	//for (i = 0; i < 3; i += 1)
	//{
	//	printf("i is %d now\n", i);
	//}

	//int num = 0;

	//for (; num != -1 ;)
	//{
	//	printf("숫자를 입력하세요 : ");
	//	scanf("%d", &num);
	//}

	//int dan, mul;

	//for (dan = 2; dan < 10; dan++)
	//{
	//	for (mul = 1; mul < 10; mul++)
	//	{
	//		printf("%d x %d = %d\n", dan, mul, dan * mul);
	//	}
	//	printf("\n");
	//}

	//int num;

	//while (1)
	//{
	//	printf("-1 입력 시 종료 :");
	//	scanf("%d", &num);

	//	if (num == -1) break;
	//}

	int num;

	for (num = 1; num <= 5; num++)
	{
		if (num == 3) continue;
		printf("%d\n", num);
	}

	return 0;
}

// 연산자
// 조건문
// 반복문
// 어떤 연산 혹은 검증을 반복하고자 할 때
// 반복문을 얼만큼 잘 사용하는지에 따라서 초.중급 실력 나누어진다
// while문은 무한루프의 반복문을 사용하고자 할 때, 주로 사용됨
// do~while문은 while 반목문의 조건식의 참.거짓 여부와 상관없이 무조건 1회 실행
// do : ~을 하다!!
// 반복문 가운데, 가장 인기, 많이 사용되는 반복문 : for문
// for (초기식; 조건식; 증감식) { }
// for 문 중첩문 -> 바깥쪽 for 문 행 // 안쪽 for 문 열
// 반복문에서 break 문이 나오면 => 반복문을 종결하고, 바깥으로 나간다!!
// 반복문에서 continue 문을 사용하면 => 다음번 실행해야할 명령문을 건너뛰고, 다시 반복문을 시작한다