// 7.7 논리 연산자 Logical Operator
/*
	논리 연산자 (Logical Operator)
	&&	: AND 연산
	||	: OR 연산
	!	: 부정 연산
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PERIOD '.'

int main(void)
{
	// TO DO : 입력한 문자열의 총 문자 갯수
	char ch;
	int count = 0;

	while ((ch = getchar()) != PERIOD) { // 마침표(.)가 입력될 때까지 입력을 받는다.
		// 줄바꿈(\n)도 문자로 포함되므로 실제 문자의 갯수보다 더 큰 값이 출력된다.
		count++;
	}

	printf("%d", count);

	return 0;
}