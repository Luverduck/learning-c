// 3.4 간단한 입출력 프로그램 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 변수 초기화
	int won = 0;
	int dollar = 0;

	// 입력
	printf("Input Won.\n");
	scanf("%d", &won);

	dollar = won * 0.00089;

	// 연산
	printf("Dollar = %d\n", dollar); 
	// 결과값이 int 자료형에 저장되므로 소수점이 제거되어 0으로 표시된다.

	return 0;
}