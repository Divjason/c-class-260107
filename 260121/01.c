#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*char good = "hello";*/
	//char greet01[] = "Hello!"; // 배열기반의 문자열 생성
	//char* greet02 = "Hello!"; // 포인터변수기반의 문자열 생성

	//printf("%s %s", greet01, greet02);

	char good[] = "Good!";
	char* bad = "Bad!";
	printf("%s %s\n", good, bad);
	printf("%c\n", good[0]);

	good[0] = 'H';

	printf("%c\n", good[0]);

	// good = "New Good";
	// 배열 기반 문자열은 새로운 주소값을 할당 X
	//print("%s", good);

	//bad[0] = 'S';
	//printf("%c", bad[0]);
	// 포인터 기반 문자열은 개별 요소값 할당 불가능!

	bad = "New Bad";
	printf("%s %s\n", good, bad);

	return 0;
}

// 배열, 포인터
// 문자열, 포인터