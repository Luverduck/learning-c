// 6.7 관계 연산자의 우선순위
/*
	연산자의 우선순위 (Operator Precedence)
	https://en.cppreference.com/w/c/language/operator_precedence
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1, y = 2, z;

	// 관계 연산자(>, >=, <, <=)가 가감 연산자(+, -)보다 우선순위가 낮다
	printf("%d\n", x > y + 2); // 결과 : 0 (false)
	printf("%d\n", x > (y + 2)); // 결과 : 0 (false)

	// 관계 연산자(>, >=, <, <=)가 대입 연산자(=)보다 우선순위가 높다.
	printf("%d\n", z = x > y);
	printf("%d\n", z = (x > y));

	// '==' 연산자와 '!=' 연산자의 우선순위가 같으므로 왼쪽부터 순서대로 연산
	printf("%d\n", x != y == z);
	printf("%d\n", (x != y) == z);

	return 0;
}