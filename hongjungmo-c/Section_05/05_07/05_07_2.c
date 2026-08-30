// 5.7 나머지 연산자
/*
	나머지 연산자
	%	: 왼쪽의 피연산자에 오른쪽의 피연산자로 나눈 나머지를 구한다.

	나머지 연산자의 특징
	1. 실수의 나머지 연산은 허용하지 않는다. (정수와 정수의 나머지 연산만 가능)
	2. 나머지 연산 결과의 부호는 첫 번째 피연산자의 부호와 같다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 나머지 연산 결과의 부호
	int div; // 나누기(division) 연산 결과
	int mod; // 나머지(modulo) 연산 결과

	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = 11 / -5;
	mod = 11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = -11 / -5;
	mod = -11 % -5;
	printf("div = %d,\t mod = %d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;
	printf("div = %d,\t mod = %d\n", div, mod);

	return 0;
}