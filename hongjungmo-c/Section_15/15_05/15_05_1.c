// 15.5 2의 보수 표현법 확인해보기
/*
	음수 표현법
	비트를 통해 음수를 표현하는 방법
	- 부호 크기 표현 (Sign-magnitude Representation)
	- 1의 보수법 (One’s complement)
	- 2의 보수법 (Two’s complement)

	부호 크기 표현 (Sign-magnitude Representation)
	최상위 비트를 부호를 나타내는 비트로 사용한다.
	[문제점] 숫자 0에 대하여 +0과 -0이 따로 존재한다.

	1의 보수법 (One’s complement)
	최상위 비트를 부호를 나타내는 비트로 사용한다.
	비트 반전(비트 NOT 연산)을 통해 음수를 표현한다.
	[문제점] 숫자 0에 대하여 +0과 -0이 따로 존재한다.

	2의 보수법 (Two’s complement)
	최상위 비트를 부호를 나타내는 비트로 사용한다.
	비트 반전(비트 NOT 연산)에 1을 더하여 음수를 표현한다.
	지정한 자료형의 최대 저장 범위를 초과할 경우 오버플로우가 발생하여 최소값인 0이 된다.
*/

#include <stdio.h>
#include <math.h>

// 비트 AND 연산자 &를 사용하여 10진수 정수형을 2진수 형태로 출력
void print_binary(const char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * 8;

	for (size_t i = 0; i < bits; ++i)
	{
		const char mask = (char)pow(2, (bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};

int main(void)
{
	// 입력 숫자 127을 2진수로 출력
	print_binary(127);

	// 입력 숫자에 비트 반전 결과 출력
	print_binary(-127);

	// 입력 숫자에 대한 2의 보수 출력
	print_binary(~127 + 1);

	return 0;
}