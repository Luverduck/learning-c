// 15.6 비트단위 시프트 연산자

#include <stdio.h>
#include <stdlib.h>

// 비트 AND 연산자 &를 사용하여 10진수 정수형을 2진수 형태로 출력
void print_binary(const char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * CHAR_BIT;

	for (size_t i = 0; i < bits; ++i)
	{
		// 비트 시프트 연산자 사용
		const char mask = 1 << (bits - 1 - i);

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};

int main(void)
{
	print_binary(30);

	return 0;
}