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
	// 정수와 정수의 나머지 연산
	int num_int_1 = 10;
	int num_int_2 = 4;
	printf("%d\n", num_int_1 % num_int_2);

	// 실수와 실수의 나머지 연산
	double num_double_1 = 4.5;
	double num_double_2 = 2.0;
	printf("%f\n", num_double_1 % num_double_2);
	// expression must have integral or unscoped enum type

	// 정수와 실수의 나머지 연산
	printf("%f\n", num_int_1 % num_double_1);
	// expression must have integral or unscoped enum type

	return 0;
}