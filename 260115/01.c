#include <stdio.h>

int main(void)
{
	// 배열을 선언, 값을 할당x
	int myArr01[3];

	// 배열을 선언 & 값을 할당o
	int myArr02[3] = { 1, 2, 3 };

	// 배열의 길이를 정의하지 않고, 값만 할당 o
	int myArr03[] = {1, 2, 3};

	char character[] = { 'a', 'b', 'c', 'd', 'e' };

	// 배열 안에 있는 값 찾아오기!
	int i;
	int odd[3]; // odd = 홀수
	int even[5] = {2, 4, 6, 8, 10};

	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", even[i]);
	}

	return 0;
}

// 배열
// 파이썬 리스트
// 자바, 자바스크립트, C 배열
// 배열안에 있는 값들은 고유한 인덱스값
// 그 인덱스값으로 인해 반복순회할 수 있는 성격