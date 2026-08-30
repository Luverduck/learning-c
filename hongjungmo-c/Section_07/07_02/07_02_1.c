// 7.2 표준 입출력 함수들 getchar(), putchar() 예제
/*
	int getchar(void);
	표준 입력 스트림의 다음 위치 문자를 읽는다.

	int putchar(int ch);
	표준 출력 스트림의 현재 위치에 문자를 쓴다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // getchar(), putchar()
int main()
{
	char ch;

	// 문자 하나를 읽고 ch에 저장
	ch = getchar();

	// 인자로 받은 문자를 출력
	putchar(ch);

	return 0;
}