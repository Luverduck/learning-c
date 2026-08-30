// 5.3 더하기, 빼기, 부호 연산자들
/*
	부호 연산자 (Sign Operator)
	+	: 양의 값을 표현
	-	: 음의 값을 표현
*/

#include <stdio.h>
int main(void)
{
	int a, b;
	a = -7; // 상수 리터럴 7에 -1을 곱한다.
	b = -a; // a의 값에 -1을 곱한다.
	b = +a; // a의 값에 +1을 곱한다.

	return 0;
}