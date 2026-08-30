// 3.8 8진수와 16진수
/*
	10진수를 N진수로 출력
	- 2진수 : 서식 지정자가 존재하지 않음
	- 8진수 : 서식 지정자로 '%o' 사용
	- 16진수 : 서식 지정자로 '%x', '%X' 사용
*/
#include <stdio.h>
int main(void)
{
	// 10진수
	unsigned int decimal = 4294967295;
	printf("decimal is %u\n", decimal);

	// 10진수를 2진수로 출력
	// - printf() 함수에서 2진수 출력을 위한 서식 지정자가 정의되어있지 않다.

	// 10진수를 8진수로 출력 
	// - 서식 지정자 '%o' : 10진수를 접두사가 없는 8진수로 출력
	printf("octal is %o\n", decimal);
	// - 서식 지정자 '%#o' : 10진수를 접두사가 포함된 8진수로 출력
	printf("octal is %#o\n", decimal);

	// 10진수를 16진수로 출력 
	// - 서식 지정자 '%x' : 10진수를 접두사가 없는 소문자 16진수로 출력 (0 ~ 9, a ~ f)
	printf("hexadecimal(lower) is %x\n", decimal);
	// - 서식 지정자 '%#x' : 10진수를 접두사가 포함된 소문자 16진수로 출력
	printf("hexadecimal(lower) with prefix is %#x\n", decimal);
	// - 서식 지정자 '%X' : 10진수를 접두사가 없는 대문자 16진수로 출력 (0 ~ 9, A ~ F)
	printf("hexadecimal(capital) is %X\n", decimal);
	// - 서식 지정자 '%#X' : 10진수를 접두사가 포함된 대문자 16진수로 출력
	printf("hexadecimal(capital) with prefix is %#X\n", decimal);

	return 0;
}