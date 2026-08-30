// 3.5 정수와 실수
/*
	정수(Integer)
	0, 양의 정수, 음의 정수를 포함
	다루는 정수의 범위에 따라 자료형 앞에 signed 또는 unsigned가 붙음
	변수에 저장하는 10진수 정수의 값은 2진수로 변환되어 메모리에 저장

	실수(Real number)
	부동소수점(floating point) 표현법 사용
	변수에 저장하는 10진수 실수의 값은 2진수로 변환되어 메모리에 저장
*/

#include <stdio.h>
int main(void)
{
	// 정수 (Integer)
	// 1) 부호가 있는 자료형 
	// - 최상위 비트를 부호 비트로 사용
	// char : 1[Byte]
	char char_min = -128, char_max = 127;
	// short : 2[Byte]
	short short_min = -32768, short_max = 32767;
	// int : 4[Byte]
	int int_min = -2147483648, int_max = 2147483647;
	// long : 4[Byte]
	long long_min = -2147483648, long_max = 2147483647;
	// long long : 8[Byte]
	long long long_long_min = -9223372036854775808, long_long_max = 9223372036854775807;

	// 2) 부호가 없는 자료형
	// - 최상위 비트까지 값을 나타내는 데 사용
	// - 나타낼 수 있는 값의 범위가 부호가 없는 자료형의 2배
	// unsigned char : 1[Byte]
	unsigned char char_min = 0, char_max = 255;
	// unsigned short : 2[Byte]
	unsigned short short_min = 0, short_max = 65535;
	// unsigned int : 4[Byte]
	unsigned int int_min = 0, int_max = 4294967295;
	// unsigned long : 4[Byte]
	unsigned long long_min = 0, long_max = 4294967295;
	// unsigned long long : 8[Byte]
	unsigned long long long_long_min = 0, long_long_max = 18446744073709551615;

	return 0;
}