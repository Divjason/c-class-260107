#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//char* getString(void)
//{
//	char str[100];
//	printf("좋아하는 단어는? ");
//	gets(str);
//
//	return str;
//}

int main(void)
{
	//char* result = getString();
	//printf("당신이 좋아하는 단어는 : %s\n", result);

	//int* iptr = (int *)malloc(sizeof(int) * 5);
	//double* dptr = (double *)malloc(sizeof(double) * 3);
	//int i;

	//for (i = 0; i < 5; i++)
	//{
	//	iptr[i] = 10 * (i + i);
	//}

	//for (i = 0; i < 5; i++)
	//{
	//	printf("%d ", iptr[i]);
	//}
	//printf("\n");

	//dptr[0] = 3.14;
	//dptr[1] = 4.31;
	//dptr[2] = 1.43;

	//printf("%g %g %g\n", dptr[0], dptr[1], dptr[2]);

	//if (iptr != NULL) free(iptr);
	//if (dptr != NULL) free(dptr);

	// malloc 함수를 통해서 할당된 메모리 공간은 최초에 동적으로 할당한 이후에
	// 별도로 해제하거나, 프로그램 자체적으로 종료되지 않는다면, 계속해서 메모리
	// 공간에 남아있기 때문에 => 굳이 사용하지도 않은 변수를 메모리 저장!!!
	// 전역 변수 => 등록 // 굳이 불필요하게 메모리 낭비 => 동적 메모리 할당
	// 힙 메모리 => 생성, 사용, 해제

	// int 자료형 5개만큼 할당

	int* ptr;
	int count = 0;
	int maxSize = 3;
	int num;
	int i;

	ptr = (int*)calloc(maxSize, sizeof(int));

	while (1)
	{
		printf("정수를 입력하세요(-1 입력 시, 종료): ");
		scanf("%d", &num);

		if (num == -1)
		{
			break;
		}

		if (count == maxSize)
		{
			maxSize += maxSize;
			ptr = (int*)realloc(ptr, maxSize * sizeof(int));
		}

		ptr[count++] = num;
	}

	for (i = 0; i < count; i++)
	{
		printf("%d ", ptr[i]);
	}

	if (ptr != NULL) free(ptr);

	return 0;
}

// C언어의 경우, 컴퓨터 메모리 공간 활용
// 
// 코드 영역 : 코드 등록
// 데이터 영역 : 전역 변수
// 스택 영역 : 필요에 따라서 사용될 변수 = 지역 변수 등록
// 힙 영역 : 사용자가 필요에 따라서 메모리를 동적으로 사용하고자 할 때 등록
// 전역 변수 // 지역 변수

// 메모리 동적 할당
// 프로그램이 실행되는 동안에 사용할 메모리 공간을 할당해놓는 것 => 메모리 동적 할당

// malloc 함수는 할당된 메모리 공간의 주소값을 반환!!!
// malloc(sizeof(int) * 30) -> sizeof(타입) * 30
// calloc(30, sizeof(int)) -> 30개의 정수자료형 타입 동적 메모리 공간 할당
// calloc => 메모리 할당과 동시에 메모리 공간을 모두 0이라는 값으로 초기화!!
// realloc => 기존에 할당된 동적 메모리의 공간의 사이즈를 조절하고자 할 때, 사용!
// realloc(포인터 변수, 조절하고자 하는 사이즈)