#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	//int arr[5];
	//int sum = 0;

	//srand(time(NULL));

	//for (int i = 0; i < 5; i++)
	//{
	//	arr[i] = rand() % 100 + 1;
	//	sum += arr[i];
	//}

	//double avg = sum / 5.0;

	//printf("배열 요소 :");
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n");

	//printf("총합 : %d\n", sum);
	//printf("평균 : %.2f\n", avg);

	//char word[100];

	//printf("영단어 입력 : ");
	//scanf("%99s", word);

	//int len = (int)strlen(word);

	//printf("뒤집은 결과 : ");
	//for (int i = len - 1; i >= 0; i--)
	//{
	//	printf("%c", word[i]);
	//}

	char word[100];

	printf("영단어 입력 : ");
	scanf("%99s", word);

	int len = (int)strlen(word);

	char maxCh = word[0];

	for (int i = 1; i < len; i++)
	{
		if (word[i] > maxCh)
		{
			maxCh = word[i];
		}
	}

	printf("아스키코드 값이 가장 큰 문자 : %c", maxCh);

	return 0;
}

// 길이가 5인 int 자료형 배열 선언
// 각 값을 입력 후 해당 배열안에 있는 값의 총합, 평균

// 사용자로부터 영어 단어를 하나 받아주세요. hello
// 해당 단어가 반대순으로 출력되게 해주세요. olleh

// 사용자로부터 영어 단어를 하나씩 입력받으세요.
// 그리고 입력받은 영어 단어들의 아스키코드 값이 가장 큰 문자를 알려주는
// 코드를 작성해주세요.