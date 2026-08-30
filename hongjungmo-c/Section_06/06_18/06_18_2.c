// 6.18 루프 안에서 함수의 반환값 사용하기
/*
	TO DO : 사용자로부터 입력받은 정수의 제곱 구하기
	ex) 3과 4를 입력하면 3의 4제곱을 구하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수의 prototype 선언
int compute_power(int base, int exp);

int main(void)
{
	int base, exp, result;
	// int i;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		// base와 exp의 값을 입력받아 result를 반환하는 함수 정의
		result = compute_power(base, exp);

		printf("Result = %d\n", result);
	}
	return 0;
}

int compute_power(int base, int exp) {
	// main() 함수에서 정의된 i와 result는 main() 함수의 영역(scope) 내에서만 사용할 수 있다.
	int i, result; // power 함수 내에서 i와 result를 사용하기 위해서는 새로 정의해야 한다.

	result = 1;
	for (i = 0; i < exp; ++i) {
		result *= base; // base를 exp번 곱한다.
	}

	return result;
};