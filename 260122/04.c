#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void calc(int a, int b)
//{
//	printf("덧셈 : %d\n", a + b);
//	printf("뺄셈 : %d\n", a - b);
//	printf("곱셈 : %d\n", a * b);
//
//	if (b != 0) printf("나눗셈 : %d\n", a / b);
//	else printf("나눗셈 : 0으로 나눌 수 없습니다.\n");
//}

int sum_between(int a, int b)
{
	//int sum = 0;

	//for (int i = a + 1; i < b; i++)
	//{
	//	sum += i;
	//}

	//return sum;

	//int sum = 0;
	//int start, end;

	//if (a < b)
	//{
	//	start = a;
	//	end = b;
	//}
	//else
	//{
	//	start = b;
	//	end = a;
	//}

	//for (int i = start + 1; i < end; i++)
	//{
	//	sum += i;
	//}

	//return sum;
}

int count_multiple_of_7(int n)
{
	int count = 0;

	for (int i = n; i <= n + 200; i++)
	{
		if (i % 7 == 0) count++;
	}

	return count;
}

int main(void)
{
	//int x, y;
	//scanf("%d %d", &x, &y);
	//calc(x, y);

	//int x, y, temp;
	//scanf("%d %d", &x, &y);

	//if (x > y)
	//{
	//	temp = x;
	//	x = y;
	//	y = temp;
	//}

	//printf("%d과 %d사이의 정수의 총합은 : %d", x, y, sum_between(x, y));

	int num;
	printf("정수를 입력하세요 :");
	scanf("%d", &num);

	printf("%d과 %d사이의 7의 배수는 %d개 입니다.\n", num, num + 200, count_multiple_of_7(num));

	return 0;
}

// 사용자로부터 2개의 정수를 받으세요
// 해당 2개의 정수를 활용해서 해당 정수 사이에 존재하는 모든 정수 값을 더해서 반환하는 함수 선언!
// 5, 9 -> 6, 7, 8 -> 21 값을 반환할 수 있는 함수면 됩니다.

// 사용자로 부터 어떤 정수 1개를 입력받으세요.
// 해당 정수 + 200까지의 범위 내에서 7의 배수인 정수의 개수를 출력하는 함수를 선언해주세요
// 해당 함수의 반환값을 출력해주세요.
// 100 ~ 300 : 7의 배수인 정수는 28개!!

// 