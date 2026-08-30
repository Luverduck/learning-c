// 11.9 문자 함수를 문자열에 사용하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), ...

void toupper_str(char* str);

int main(void)
{
	// TO DO : 입력 문자열의 모든 문자를 대문자로 변경
	char input[100];

	// 입력 (gets는 개행 문자 '\n'를 널 문자 '\0'로 치환)
	gets(input, sizeof(input));

	// 입력 문자열의 모든 문자를 대문자로 변경
	toupper_str(input);

	// 변경된 문자열 출력
	puts(input);

	return 0;
}

void toupper_str(char* str)
{
	// 문자열의 현재 위치의 값이 널 문자 '\0'가 아닐 동안만 반복
	while (*str != '\0') {
		*str = toupper(*str); // 현재 위치의 문자를 대문자로 변경
		str++; // 다음 위치로 이동
	}
};