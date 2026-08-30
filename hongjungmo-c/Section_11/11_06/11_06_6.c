// 11.6 다양한 문자열 함수들
/*
	기타 문자열 함수

	sprintf 함수
	형식화된 출력을 대상 문자열에 저장한다.
	int sprintf( char *str, const char *format [,argument] ... );
	- str: 출력을 저장할 문자열의 주소
	- format : 형식 지정자
	- argument : 형식 지정자의 요소에 대응하는 인수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = "";
	int i = 123;
	double d = 3.14;

	sprintf(str, "%05d.png %f", i, d);

	printf("%s\n", str);

	return 0;
}
