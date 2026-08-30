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
	// 띄어쓰기로 구분된 여러 개의 입력 읽기
	int i;
	float f;
	char str[30];
	
	scanf("%d %f %s", &i, &f, str);
	printf("%d %f %s\n", i, f, str);

	return 0;
}