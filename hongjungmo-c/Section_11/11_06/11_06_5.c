// 11.6 다양한 문자열 함수들
/*
	기타 문자열 함수

	strchr 함수
	대상 문자열에서 특정 문자를 찾는다.
	- str : 대상 문자열
	- c : 찾을 문자
	- [return] char* : 찾은 문자의 주소

	strrchr 함수
	대상 문자열에서 특정 문자가 마지막으로 발견된 주소를 반환한다.
	char *strrchr( const char *str, int c );
	- str : 대상 문자열
	- c : 찾을 문자
	- [return] char* : 찾은 문자의 주소

	strpbrk 함수
	대상 문자열에서 특정 문자 집합의 요소가 처음으로 발견된 주소를 반환한다.
	char *strpbrk( const char *str, const char *strBreakSet);
	- str : 대상 문자열
	- strBreakSet : 찾을 문자들의 집합
	- [return] char* : 찾은 문자들 중 가장 먼저 발견된 문자의 주소

	strstr 함수
	대상 문자열에서 특정 문자열이 처음으로 발견된 주소를 반환한다.
	char *strstr( const char *str, const char *strSearch );
	- str : 대상 문자열
	- strSearch : 찾을 문자열
	- [return] char* : 찾은 문자열의 주소
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", strchr("Hello, World!", 'W'));

	printf("%s\n", strrchr("Hello, Hello, Hello, World!", 'l'));

	printf("%s\n", strpbrk("Hello, World!", "abcdef"));

	printf("%s\n", strstr("Hello, World!", "Wor"));

	return 0;
}
