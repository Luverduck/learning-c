// 15.2 이진수를 십진수로 바꾸기 연습문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

unsigned char to_decimal(const char bi[]);

int main(void)
{
	printf("Binary (string) to Decimal conversion\n");
	
	printf("%d\n", to_decimal("00000110")); 
	// 0000 0110 = 1*(2^2) + 1*(2^1) = 4 + 2 = 6
	
	printf("%d\n", to_decimal("00010110")); 
	// 0001 0110 = 1*(2^4) + 1*(2^2) + 1*(2^1) = 16 + 4 + 2 = 22

	printf("%d\n", to_decimal("10010100"));

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