// 6.18 루프 안에서 함수의 반환값 사용하기
/*
	TO DO : 사용자로부터 입력받은 정수의 제곱 구하기
	ex) 3과 4를 입력하면 3의 4제곱을 구하는 프로그램
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int base, exp, i, result;

	while (scanf("%d %d", &base, &exp) == 2)
	{
		result = 1;
		for (i = 0; i < exp; ++i) {
			result *= base; // base를 exp번 곱한다.
		}

		printf("Result = %d\n", result);
	}
	return 0;
}