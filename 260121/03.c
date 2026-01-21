#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str1[50] = "apple is good";
	//char str2[50] = "berry is good";
	//char str3[50];

	//printf("str1의 길이 : %d, str2의 길이 : %d\n", strlen(str1), strlen(str2));

	//strcpy(str3, str1);

	//strncpy(str2, str1, 5);

	//printf("%s\n %s\n %s\n", str1, str2, str3);

	//char str1[50] = "Michael ";
	//char str2[50] = "Michael ";

	//strcat(str1, "Bolton");
	//printf("%s\n", str1);

	//strncat(str2, "Jackson Five", 7);
	//printf("%s\n", str2);

	//printf("비교결과 : %d\n", strcmp(str1, str2));

	//printf("비교결과 : %d\n", strncmp(str1, str2, 7));

	char s1[101], s2[101];
	int i = 0;

	while (1)
	{
		char ch = getchar();
		if (ch == '\n') break;
		s1[i++] = ch;
	}

	s1[i] = '\0';

	i = 0;
	while (1)
	{
		char ch = getchar();
		if (ch == '\n') break;
		s2[i++] = ch;
	}

	s2[i] = '\0';

	if (strcmp(s1, s2) == 0)
	{
		char msg[] = "같습니다\n";
		i = 0;
		while (msg[i] != '\0')
		{
			putchar(msg[i++]);
		}
	}
	else
	{
		char msg[] = "같지 않습니다\n";
		i = 0;
		while (msg[i] != '\0')
		{
			putchar(msg[i++]);
		}
	}

	return 0;
}

/*
strlen(str) : 인자값으로 전달 문자열에 Null문자를 제외한 일반 문자열의 길이
strcpy(str1, str2) : str2의 문자열을 str1으로 복사 
strncpy(str1, str2, count) : str2의 문자열을 str1으로 복사 (세번째 인자값의 개수만큼)
strcat(str, str2) : str2를 str1 뒤에 붙이기
strncat(str, str2, count) : str2를 str1 뒤에 붙이기 (세번째 인자값의 개수만큼)
strcmp(str, str2) : 두 문자열을 비교, 같은 0
strncmp(str, str2, count) : 세번째 인자값의 개수만큼 문자열을 비교, 같은 0 (세번째 인자값의 개수만큼)
*/