// 6.5 사실과 거짓
/*
	관계 표현식 (Relational Expression)
	관계 연산자로 나타낸 표현식
	1(true) 또는 0(false)의 값을 갖는다.
*/

#include <stdio.h>
int main(void)
{
	// 관계 표현식의 값(value)
	int true_value = 2 < 3;
	int false_value = 2 > 3;

	printf("True value \t: %d\n", true_value);	// 결과 : 1 (true)
	printf("False value \t: %d\n", false_value);	// 결과 : 0 (false)

	return 0;
}