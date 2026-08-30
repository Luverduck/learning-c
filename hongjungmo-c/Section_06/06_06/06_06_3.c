// 6.6 _Bool 자료형
/*
	_Bool
	참과 거짓을 나타내는 논리 자료형
	1(true)와 0(false)의 값을 갖는다
*/

#include <stdio.h>
int main(void)
{
	// _Bool의 3항 연산
	_Bool true_value = 2 < 3;
	_Bool false_value = 2 > 3;

	// 조건 연산 (또는 3항 연산)
	// [표현식] ? [true일 때 값] : [false일 때 값]
	printf(true_value ? "true" : "false");
	printf("\n");
	printf(false_value ? "true" : "false");

	return 0;
}