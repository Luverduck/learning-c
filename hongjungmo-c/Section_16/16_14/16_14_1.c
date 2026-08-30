// 16.14 표준 유틸리티 라이브러리
/*
	stdlib.h
	C 언어의 표준 라이브러리로, 문자열 변환, 동적 메모리 관리 등의 함수를 포함하는 헤더 파일
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void print_goodbye()
{
	printf("Goodbye.\n");
}

void print_thankyou()
{
	printf("Thank You.\n");
}

int main(void)
{
	printf("Purchase?\n");
	if (getchar() == 'y')     // 'y'를 입력한 경우에만
		atexit(print_thankyou); // 프로그램이 종료될 때 print_thankyou() 함수 실행

	// 입력 버퍼 비우기
	while (getchar() != '\n') {};

	printf("Goodbye message?\n");
	if (getchar() == 'y')    // 'y'를 입력한 경우에만
		atexit(print_goodbye); // 프로그램이 종료될 때 print_goodbye() 함수 실행

	return 0;
}