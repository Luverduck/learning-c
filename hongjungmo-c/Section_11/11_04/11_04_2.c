// 11.4 문자열을 입력받는 다양한 방법들
/*
	gets / gets_s
	개행 문자 '\n' 또는 EOF를 발견할 때까지 표준 입력 스트림 stdin을 읽고 buffer에 저장한다.
	함수 실행 결과를 반환하기 전 개행 문자 '\n'를 널 문자 '\0'로 치환한다.

	puts
	문자열 str을 표준 출력 스트림 stdout에 출력한다.
	문자열을 출력하기 전 널 문자 '\0'를 개행 문자 '\n'로 치환한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];

	// char *gets( char *str );
	// char* gets_s( char *str, rsize_t size );
	// buffer : 문자열을 저장할 주소
	// size : 문자열의 길이
	gets(str);
	gets_s(str, sizeof(str));

	// int puts(const char* str);
	// str : 출력할 문자열의 주소
	puts(str);

	return 0;
}