// 7.7 논리 연산자 Logical Operator
/*
	논리 연산자의 우선순위
	! > && > ||
	(AND 연산자가 OR 연산자보다 우선순위가 높다)
	Reference : https://en.cppreference.com/w/c/language/operator_precedence
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h> // bool

int main(void)
{
	// 논리 연산자의 우선순위 예제
	int a = 1, b = 2, c = 3, d = 4;

	// 연산 순서
	a > b && b > c || b < d;
	// ( a > b && b > c ) || ( b < d )
	// 1) ( a > b && b > c )
	//   - 비교 연산자 '>'가 논리 연산자 '&&'보다 연산자 우선순위가 높다 
	//   - (a > b)와 (b > c) 각각 연산 후 (a > b) && (b > c) 연산 => 결과 : 0
	// 2) ( b < d )
	//   - (b < d) 연산 => 결과 : 1
	// 3) ( a > b && b > c ) || ( b < d )
	//   - ( a > b && b > c )의 결과 0과 ( b < d )의 결과 1의 OR 연산 => 결과 : 1

	bool result = a > b && b > c || b < d;
	printf("%d", result);

	return 0;
}