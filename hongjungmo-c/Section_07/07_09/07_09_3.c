// 7.9 조건 연산자
/*
	조건 연산자 (Conditinal Operator)
	X ? A : B
	X가 true일 때 A, false일 때 B를 반환
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	// 조건 연산자 예제
	// 조건 연산자로 최대값 구하기
	int a = 1, b = 2;
	int max = (a > b) ? a : b;

	return 0;
}