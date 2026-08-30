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
	// 공백 읽기
	char c;
	scanf("%c", &c);
	printf("%i\n", c);

	return 0;
}