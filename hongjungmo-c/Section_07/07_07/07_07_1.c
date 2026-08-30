// 7.7 논리 연산자 Logical Operator
/*
	논리 연산자 (Logical Operator)
	&&	: AND 연산
	||	: OR 연산
	!	: 부정 연산
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h> // bool

int main(void)
{
	// 논리 연산자 예제

	bool test1 = 3 > 2 && 5 > 6;
	printf("result of test1 : %d\n", test1);
	// 결과 : 0 (false)

	bool test2 = 3 > 2 || 5 > 6;
	printf("result of test2 : %d\n", test2);
	// 결과 : 1 (true)

	bool test3 = !(5 > 6);
	printf("result of test3 : %d\n", test3);
	// 결과 : 1 (true)

	return 0;
}