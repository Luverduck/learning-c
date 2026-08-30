// 15.2 이진수를 십진수로 바꾸기 연습문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>   // pow()
#include <string.h> // strlen()
#include <stdlib.h> // exit()

int to_decimal(const char*);

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
int to_decimal(const char* str)
{
	// 변환 결과값
	int result = 0;

	// 이진수 문자열의 길이
	int lenth = strlen(str);

	// 문자열 순회
	for (int i = 0; i < lenth; ++i)
	{
		if (*str == '1') // 특정 자릿수의 문자열이 '1'인 경우에만
			result += (int)pow(2.0, lenth - i - 1);
		str++; // 자릿수 이동
	}

	return result;
};