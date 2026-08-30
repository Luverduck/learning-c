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
	int number;
	scanf("%d", &number);

	bool is_even;

	// TO DO : if ~ else문을 쓰지 않고 다음과 같은 동작을 하는 프로그램을 구현
	//if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;

	is_even = number % 2 == 0 ? true : false;

	if (is_even)
		printf("Even");
	else
		printf("Odd");

	return 0;
}