#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char ch;

	//while (1)
	//{
	//	printf("입력하세요 : "); // 값을 입력 -> 엔터입력(a\n)
	//	scanf(" %c", &ch);

	//	if (ch >= 'A' && ch <= 'Z')
	//	{
	//		printf("%c를 입력했습니다. 종료합니다.\n", ch);
	//		break;
	//	}
	//	else 
	//	{
	//		printf("%c를 입력했습니다.\n", ch);
	//	}
	//}

	//int i;

	//for (i = 100; i <= 200; i++)
	//{
	//	if (i % 3 == 0 || i % 7 == 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}

	//int a, b, i, j;

	//printf("첫 번째 숫자를 입력하세요 : ");
	//scanf("%d", &a);

	//printf("두 번째 숫자를 입력하세요 : ");
	//scanf("%d", &b);

	//int start = (a < b) ? a : b;
	//int end = (a > b) ? a : b;

	//for (i = start; i <= end; i++)
	//{
	//	printf("=== %d단 ===\n", i);
	//	for (j = 1; j <= 9; j++)
	//	{
	//		printf("%d x %d = %d\n", i, j, i * j);
	//	}
	//	printf("\n");
	//}

	//int count = 0;
	//int num = 2;

	//while (count < 10)
	//{
	//	int i, isPrime = 1;
	//	for (i = 2; i < num; i++)
	//	{
	//		if (num % i == 0)
	//		{
	//			isPrime = 0;
	//			break;
	//		}
	//	}

	//	if (isPrime)
	//	{
	//		printf("%d ", num);
	//		count++;
	//	}
	//	num++;
	//}

	int n, i;
	int a = 1, b = 1, next;

	printf("몇 개의 피보나치 수열을 출력할까요? : ");
	scanf("%d", &n);

	printf("%d %d ", a, b);

	for (i = 3; i <= n; i++)
	{
		next = a + b;
		printf("%d ", next);

		a = b;
		b = next;
	}

	return 0;
}

// 100~200 숫자 중에서 3과 7의 배수를 출력하는 프로그래밍 코드
// 3의 배수이면, 7의 배수인 수의 경우, 1번만 출력!!! 21의 배수 -> 1번만 출력!!
// 반복문 실행 (100; 200)
// if % 3 == 0 || % 7 == 0 출력!!!

// 사용자로부터 2개의 정수를 입력받으세요.
// 첫번째 정수부터, 두번째 정수까지의 구구단을 출력해주세요!
// 낮은 숫자를 시작으로 구구단을 출발해야한다.
// 4, 8 => 4단 5단 6단 7단 8단
// 8, 4 => 4단 5단 6단 7단 8단

// 값
// 중첩 for문을 통해서 구구단!!
// 입력받은 2개의 숫자의 비교연산!!!

// 소수 10개를 출력하는 프로그래밍 코드를 작성 (범위 1~ 소수 값만 10개를 출력)
// 소수 = 1과 본인 외 다른 숫자로는 나눌 수 없는 숫자
// 어떤 액션을 통해서 소수 X // 소수를 자동으로 10개 찾을 때까지 실행 (무한루프 | 조건)

// 피보나치 수열
// 1 1 2 3 5 8 13 21 ...
// 사용자로부터 특정 정수를 입력 -> 정수의 갯수만큼을 피보나치 수열로 생성할 수 있는 코드 작성!!!