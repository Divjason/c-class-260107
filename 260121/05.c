#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	return 0;
}
/*
컴퓨터 분류
- 하드웨어, 소프트웨어
- 입.출.본체
- 본체 : main, cpu, ram, hdd, gc...
- cpu & ram : ram -> 컴퓨터의 처리 속도 높이기 목적
- ram (휘발성 메모리 공간)
- ssd, hdd
- hdd -> ram -> cpu (연산처리)
- RAM = Random Access Memory
- 메모리 공간 => C언어는 과연 어떻게 사용할까?

Code 영역 : 프로그램 코드 저장되는 공간
Data 영역 : 변수를 선언하면, 변수이름 등록 -> 코드 영역 프로그램 코드 저장되는 시점 부터 등록
Stack 영역 : 변수를 선언하면, 변수이름 등록 -> 특정 유효한 데이터가 실행될 때부터 등록
// 유효한 데이터가 더이상 필요하지 않은 경우에는 제거
// 쌓다, 쌓이다
// 전역변수
heap 영역 : 변수가 참조할 값
// 포인터 -> 실제 저장된 값의 주소값을 찾아서 굳이 데이터, 스택영역 등록 변수를 거치지 않아도 직접 값을 처리
*/