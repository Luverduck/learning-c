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
	// 부동 소수점의 형식 지정자
	/*double d = 0.0;
	scanf("%f", &d);
	printf("%f\n", d);*/

	float f = 0.0;
	scanf("%lf", &f);
	printf("%lf\n", f);

	return 0;
}