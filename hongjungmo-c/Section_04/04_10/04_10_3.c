// 4.10 scanf() 함수의 사용법
/*
	scanf 함수
	int scanf( const char *format, ... );
	- format : 형식 지정자
	- ... : 가변 인수
	- [return] int : 읽기에 성공한 갯수
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h> // intmax_t

int main(void)
{
	// signed vs unsigned
	/*unsigned char uc;
	scanf("%i", &uc);
	printf("%i\n", uc);*/

	char c;
	scanf("%u", &c);
	printf("%u\n", c);

	return 0;
}