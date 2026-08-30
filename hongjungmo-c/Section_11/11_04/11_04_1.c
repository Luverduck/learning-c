// 11.4 문자열을 입력받는 다양한 방법들
/*
	scanf
	표준 입력 스트림 stdin을 읽고 인수로 주어진 주소의 메모리에 값을 저장한다.
	format의 형식 지정자에 대응하는 자료형과 인수가 가리키는 자료형이 같아야 한다.

	printf
	표준 출력 스트림 stdout에 문자(열) 또는 값을 출력한다.
	format의 형식 지정자에 대응하는 자료형과 인수의 자료형이 같아야 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// int scanf( const char *format, [argument] );
	// format : 형식 지정자를 나타내는 문자열
	// [argument] : 값을 저장할 메모리 주소
	scanf("%s", str);

	// int printf( const char *format, [argument] );
	// format : 형식 지정자를 나타내는 문자열
	// &[argument] : 출력할 문자(열) 또는 값
	printf("%s", str);

	return 0;
}