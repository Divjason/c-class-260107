#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 10

#define ADD 1
#define REMOVE 2
#define CHECK 3
#define ORDER 4
#define END 5

#define AMERICANO 1
#define CAFELATTE 2
#define JUICE 3
#define ICECREAM 4
#define CANCEL 5

typedef struct
{
	char* foods[MAX_LEN];
	int idxOfFoods;
	int totalPrice;
} ItemList;

void select()
{
	printf("==== What do you want ====\n");
	printf("1. 음료추가\n");
	printf("2. 음료삭제\n");
	printf("3. 선택음료 확인\n");
	printf("4. 선택음료 주문\n");
	printf("5. 프로그램 종료\n");
}

void showMenu()
{
	printf("==== ADD MENU ====\n");
	printf("1. 아메리카노 (4000)\n");
	printf("2. 카페라떼 (4500)\n");
	printf("3. 주스 (5000)\n");
	printf("4. 아이스크림 (5500)\n");
	printf("5. 동작 취소\n");
}

void addMenu(ItemList *itemlist)
{
	if (itemlist->idxOfFoods >= MAX_LEN)
	{
		printf("더 이상 추가할 수 없습니다.\n");
		return;
	}

	int choice;
	showMenu();
	printf("선택 : ");
	scanf("%d", &choice);

	switch (choice)
	{
	case AMERICANO :
		break;
	case CAFELATTE:
		break;
	case JUICE:
		break;
	case ICECREAM:
		break;
	case CANCEL:
		break;
	}

}

int main(void)
{
	ItemList itemlist;
	int choice;

	while (1)
	{
		select();
		printf("선택 : ");
		scanf("%d", &choice);
		printf("\n\n");
		switch (choice)
		{
		case ADD:
			addMenu(&itemlist);
		}
	}
	return 0;
}

// 음료주문 프로그램 생성
// 현재 어떤 음료 주문? -> 음료 -> 가격정보 추가
// 음료를 무한으로 주문x -> 한정된 수량만큼만 주문 가능
// 기존에 주문이 들어온 음료는 어떤것? -> 기존 주문 음료가 몇 번째에 존재 -> 취소
// 주문들어온 음료의 전체 총 금액?