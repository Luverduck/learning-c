// 4.2 sizeof 연산자
/*
	문자열의 sizeof 연산
	변수가 참조하는 char 배열의 메모리 크기가 반환된다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	// 문자 하나
	char c;
	size_t size_char = sizeof(char);
	printf("%u\n", size_char);

	// 문자열
	char string[10];
	size_t size_string = sizeof(string);
	printf("%u\n", size_string); // 결과 : 10
};