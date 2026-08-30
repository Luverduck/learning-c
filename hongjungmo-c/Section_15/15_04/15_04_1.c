// 15.4 비트단위 논리 연산자 확인해보기

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main(void)
{
	unsigned char a = 6;
	unsigned char b = 5;

	printf("%hhu\n", a);
	print_binary(a);

	printf("%hhu\n", a);
	print_binary(a);

	// 비트 NOT 연산자
	printf("%hhu\n", ~a);
	print_binary(~a);

	// 비트 AND 연산자
	printf("%hhu\n", a & b);
	print_binary(a & b);

	// 비트 OR 연산자
	printf("%hhu\n", a | b);
	print_binary(a | b);

	// 비트 XOR 연산자
	printf("%hhu\n", a ^ b);
	print_binary(a ^ b);

	return 0;
}

// 2진수 문자열을 10진수 정수형으로 변환
unsigned char to_decimal(const char bi[])
{
	const size_t bits = strlen(bi);
	unsigned char sum = 0;

	for (size_t i = 0; i < bits; ++i)
	{
		if (bi[i] == '1')
			sum += (int)pow(2, bits - 1 - i);
		else if (bi[i] != '0')
		{
			printf("Wrong character : %c\n", bi[i]);
			exit(EXIT_FAILURE);
		}
	}

	return sum;
};

// 비트 AND 연산자 &를 사용하여 10진수 정수형을 2진수 형태로 출력
void print_binary(const unsigned char num)
{
	printf("Decimal %d\t== Binary ", num);

	const size_t bits = sizeof(num) * 8;

	for (size_t i = 0; i < bits; ++i)
	{
		const unsigned char mask = (unsigned char)pow(2, (bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	};

	printf("\n\n");
};