// 3.8 8진수와 16진수
/*
	N진수 리터럴 상수 표기법
	- 2진수 : 숫자 앞에 접두사 '0b' 추가
	- 8진수 : 숫자 앞에 접두사 '0' 추가
	- 16진수 : 숫자 앞에 접두사 '0x'추가
*/
#include <stdio.h>
int main(void)
{
	// N진수 리터럴 상수 표기법
	// 10진수
	unsigned int decimal = 4294967295;
	printf("%u\n", decimal);

	// 2진수 : binary literal을 직접 입력할 때 접두사로 '0b'를 붙인다.
	unsigned int binary = 0b11111111111111111111111111111111;
	printf("%u\n", binary);

	// 8진수 : octal literal을 직접 입력할 때 접두사로 '0'을 붙인다.
	unsigned int octal = 037777777777;
	printf("%u\n", octal);

	// 16진수 : hexadecimal literal을 직접 입력할 때 접두사로 '0x' 또는 '0X'를 붙인다.
	unsigned int hexadecimal_lower = 0xffffffff;
	printf("%u\n", hexadecimal_lower);
	unsigned int hexadecimal_capital = 0XFFFFFFFF;
	printf("%u\n", hexadecimal_capital);

	return 0;
}