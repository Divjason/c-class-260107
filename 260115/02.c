#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//char greet[] = "Hello. Guys!"; // 12자, 13자 => 실제문자 12, \0 => NULL문자
	//printf("1차원 배열 greet의 길이는 : %d\n", sizeof(greet));

	//char goodbye[] = "Good BYE!";
	//printf("%s %d", goodbye, sizeof(goodbye));

	//char mind[30] = "I love programming!";
	//printf("%s\n", mind);

	//mind[7] = '\0';
	//printf("%s\n", mind);

	//mind[1] = '\0';
	//printf("%s\n", mind);

	char str[50];

	printf("문자열을 입력하세요 :");
	scanf("%s", str); // 일반 변수의 경우에는 scanf, 주소 &, 배열 x

	printf("입력된 문자열 : %s", str);

	return 0;
}