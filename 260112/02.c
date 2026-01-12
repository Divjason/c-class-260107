#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int age;
	printf("나이를 입력하세요 :");
	scanf("%d", &age);

	int fare = (age >= 20) ? 1250 : 800;

	printf("당신의 나이는 %d세이며, 요금은 %d원 입니다.", age, fare);*/

	/*int age, height;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("키를 입력하세요 : ");
	scanf("%d", &height);

	(age >= 12 && height >= 120) 
		? printf("놀이기구에 탑승할 수 있습니다.")
		: printf("놀이기구에 탑승할 수 없습니다.");*/

	//int peach, basket;

	//printf("담고싶은 복숭아의 개수는 : ");
	//scanf("%d", &peach);

	//basket = peach / 10;

	//if (peach % 10 != 0) {
	//	basket += 1;
	//}

	//printf("필요한 바구니의 수 : %d\n", basket);

	int sec, h, m, s;

	printf("초를 입력하세요 : ");
	scanf("%d", &sec);

	h = sec / 3600;
	m = (sec % 3600) / 60;
	s = sec % 60;

	printf("%d시간 %d분 %d초", h, m, s);
	return 0;
}

/*
사용자에게 나이를 입력받아서
20살 이상이면, 1250원
20살 미만이면, 800원 받는 지하철 요금 안내 프로그램을 개발
*/

/*
- 알고리즘 문제 해석
- 문제 세분화 하기 : Divide & Conquer : 여러가지의 복잡한 알고리즘 > 단순한 알고리즘 결합
- 문제 논리적 접근 : a + b = c => c + d => e : 수학적 사고 연관
- 문제를 말로 설명 : 해결!!!
- pseudo code (가상/가짜 코드) : 말 혹은 글로

- 변호사 : chatGPT

- 사용자로부터 나이 & 키를 입력
- 나이가 12살 이상, 키가 120 이상일 때에만 놀이기구에 탑승할 수 있도록 하는 프로그래밍 코드 작성

- 전제조건 : 바구니 : 복숭아 10개씩 담을 수 있음
- 10개씩 담고 복숭아 넘치면 무조건 추가로 바구니 사용해야함
- 사용자로부터 복숭아의 갯수를 입력받고
- 입력받은 복숭아의 갯수에 따라서 현재 바구니가 몇개가 필요한지 구하는
- 프로그램 코드를 작성해주세요!

- 사용자로부터 초를 숫자로 받으세요! 60 80 110
- 입력받은 초의 시간을 시, 분, 초의 형태로 출력해주세요
*/