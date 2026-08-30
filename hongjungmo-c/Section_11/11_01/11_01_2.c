// 11.1 문자열을 정의하는 방법
/*
	문자열 (Strings)
	null 문자 \0로 끝나는 문자의 배열
	문자열 변수에 저장된 값은 문자열의 첫 번째 문자가 저장된 메모리 주소이다.
*/

#include <stdio.h>

int main(void)
{
	// 문자열과 문자의 배열의 차이

	// 문자열
	char string[] = "ABCDEF"; // null 문자 '\0'가 포함되므로 리터럴의 자료형은 char[7]이다.

	// 문자의 배열
	char arr_char[] = { 'A', 'B', 'C', 'D', 'E' };

	return 0;
}