#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//int a[5];

	//int i, max, min, sum = 0;

	//for (i = 0; i < 5; i++)
	//{
	//	printf("NUM%d : ", i + 1);
	//	scanf("%d", &a[i]);
	//}

	//max = min = a[0];

	//for (i = 0; i < 5; i++)
	//{
	//	if (a[i] > max) max = a[i];
	//	if (a[i] < min) min = a[i];
	//	sum += a[i];
	//}

	//printf("최대값 : %d\n", max);
	//printf("최소값 : %d\n", min);
	//printf("총합계 : %d\n", sum);

	//int a[8], i;

	//for (i = 0; i < 8; i++)
	//{
	//	printf("NUM%d : ", i + 1);
	//	scanf("%d", &a[i]);
	//}

	//printf("==== 홀수 ====\n");
	//for (i = 0; i < 8; i++)
	//{
	//	if (a[i] % 2 == 1) printf("%d ", a[i]);
	//}

	//printf("\n==== 짝수 ====\n");
	//for (i = 0; i < 8; i++)
	//{
	//	if (a[i] % 2 == 0) printf("%d ", a[i]);
	//}

	char s[101];
	int i, n;
	int ok = 1;

	printf("문자열을 입력하세요 : ");
	scanf("%100s", s);

	n = (int)strlen(s);

	for (i = 0; i < n/2; i++)
	{
		if (s[i] != s[n - 1 - i])
		{
			ok = 0;
			break;
		}
	}

	if (ok) printf("동일합니다.");
	else printf("동일하지 않습니다.");

	return 0;
}
/*
길이가 5개인 1차원 배열을 생성
사용자로부터 직접 값(정수)을 받아서 해당 배열에 값을 적용
입력된 값들 가운데, 최대값, 최소값, 전체 값의 총합계 값 출력!!

최대, 최소, 총합계 = 아무것도 정해지지 않음 = 0 할당
0번째 인덱스 값을 최대 혹은 최소값을 세팅
그다음번째 인덱스 값과 반복 비교 값이 상대적으로 크거나 작으면 교체
변수 내 값이 변경되도록!!!

반복문을 활용해서 복합대입연산자로 누산기 기능을 활용해서 전체
총합계 값을 구한다
--------
1차원 배열 선언 => 정수값 할당
사용자로부터 8개의 값을 받을 수 있도록 설정

8개의 정수 가운데, 홀수만 따로 취합해서 출력
8개의 정수 가운데, 짝수만 따로 취합해서 출력
--------
문자열 값을 받을 수 있는 변수를 선언!!
사용자로부터 문자열의 값을 받아주세요!!
해당 문자열의 앞, 뒤가 일치하는지 여부를 확인해주세요

level => 팰린드롬, 회문표기법 ex. 토마토 / 기러기
동일합니다. 문구 출력
동일하지 않습니다. 문구 출력

전체 문자열의 개수 만큼 비교
문자열의 개수 => strlen() -> <string.h> 
*/