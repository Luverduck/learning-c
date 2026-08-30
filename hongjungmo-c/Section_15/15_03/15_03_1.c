// 15.3 &를 이용하여 십진수 → 이진수 연습 문제
/*
	비트 마스킹 (Bit Masking)
	비트 AND 연산자는 대응하는 두 비트가 모두 1이면 1을 반환한다.
	비트 AND 연산의 결과 형태를 정의한 이진수를 비트 마스크(Bit Mask)라 한다.
	비트 마스크의 1은 표시할 비트를, 0은 숨길 비트를 의미한다.
	십진수를 비트 마스크와 비트 AND 연산할 경우 비트 마스크 형태의 이진수를 얻을 수 있다.

	십진수의 이진수 변환 원리
	십진수를 각각의 자릿수에 해당하는 비트 마스크와 비트 AND 연산할 때
	연산 결과가 해당 비트 마스크와 같을 때 1을, 같지 않을 때 0을 출력하도록 한다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);
void print_binary(const unsigned char num);

int main(void)
{
	// 2진수 문자열을 10진수 정수형으로 변경
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	// 10진수를 2진수 형태로 출력
	print_binary(i);
	print_binary(mask);
	print_binary(i & mask);

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
	
	printf("\n");
};