// 3.6 정수의 오버플로우
/*
	N진법 숫자를 표시하는 접두사 (10진수는 접두사 없이 입력)
	2진수 : 0b
	8진수 : 0
	16진수 : 0x

	숫자를 printf() 할 때 N진법 숫자로 출력하도록 하는 형식 지정자
	2진수 : 없음
	8진수 : %o
	16진수 : %x
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// N진수를 10진수로 변환한 값 출력
	// 2진수
	int int_binary = 0b11;
	printf("%d\n", int_binary); // 10진수 형식 지정자 %d로 출력 : 2 + 1 = 3

	// 8진수
	int int_octal = 011;
	printf("%d\n", int_octal); // 10진수 형식 지정자 %d로 출력 : 8 + 1 = 9

	// 16진수
	int int_hexadecimal = 0x11;
	printf("%d\n", int_hexadecimal); // 10진수 형식 지정자 %d로 출력 : 16 + 1 = 17

	// 10진수를 N진수로 변환한 값 출력
	int int_decimal = 18;
	printf("%d\n", int_decimal); // 10진수 형식 지정자 %d로 출력 : 18
	printf("%o\n", int_decimal); // 8진수 형식 지정자 %o로 출력 : (2 * 8) + (2 * 1) = 22
	printf("%x\n", int_decimal); // 16진수 형식 지정자 %x로 출력 : (1 * 16) + (2 * 1) = 12

	return 0;
}