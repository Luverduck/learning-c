// 7.9 조건 연산자
/*
	조건 연산자 (Conditinal Operator)
	X ? A : B
	X가 true일 때 A, false일 때 B를 반환
*/

#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	// 조건 연산자 예제
	int temp;
	temp = true ? 1024 : 7;
	printf("%d\n", temp);

	temp = false ? 1024 : 7;
	printf("%d\n", temp);

	return 0;
}