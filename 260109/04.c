#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//int num1 = 7, num2 = 3;

	//int num3 = -9;

	//int num4 = 5;

	//num4 = num4 + 3;
	//+=, -=, *=, /=, %=
	//num4 += 3;

	//printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	//printf("num4 += 3의 결과값 : %d\n", num4);

	//int a = 10, b = 11;
	//printf("a == b : %d\n", a == b); // 비교연산 시, 결과값이 False 0, True 1
	//printf("a > b : %d\n", a > b);
	//printf("a < b : %d\n", a < b);
	//printf("a >= b : %d\n", a >= b);
	//printf("a <= b : %d\n", a <= b);
	//printf("a != b : %d\n", a != b);

	/*int a = 10, b = 10;

	printf("a : %d\n", a);
	printf("a : %d\n", ++a);
	printf("a : %d\n", a);

	printf("b : %d\n", b);
	printf("b : %d\n", b++);
	printf("b : %d\n", b);*/

	int kor = 86, eng = 75, math = 88, soc = 60, sci = 96;
	double avg = (kor + eng + math + soc + sci) / 5.0;
	printf("%f\n", avg);

	return 0;
}

// 연산자 = operator
// 1) 사칙연산 + 나머지 = + - * /
// % = 나머지 연산자 => 짝수.홀수
// 
// 피연산자의 타입이 서로 상이한 경우
// int, int = int
// int, float = float
// int, char = int
// char, char = char
// char, float = float
// float, float = float

// 2) 부호연산자 : + -

// 3) (복합)대입연산자 : +=, -=, *=, /=, %=

// 4) 비교연산자 : > < == != <= >=

// 5) 증감연산자 : ++ -- "피연산자 앞, 뒤-> 전위(Prefix) | 후위(Postfix)"

/*
연산자 우선순위
1) 증감연산자 (prefix : 전위)
2) 부호연산자 (+ -) -5 -8
3) 사칙연산자 - 1 : * / %
4) 사칙연산자 - 2 : + -
5) 비교연산자 - 1 : 대소비교 < > <= >=
6) 비교연산자 - 2 : 등가비교 == !=
7) 대입연산자 : = += -= *= /= %=
*/