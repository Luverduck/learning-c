// 11.9 문자 함수를 문자열에 사용하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> // toupper(), ispunct(), ...

int count_punct(char* str);

int main(void)
{
	// TO DO : 입력 문자열에서 문장 부호의 갯수 구하기
	char input[100];

	// 입력 (gets는 개행 문자 '\n'를 널 문자 '\0'로 치환)
	gets(input, sizeof(input));

	// 입력 문자열에서 문장 부호의 갯수 반환
	int result = count_punct(input);

	// 변경된 문자열 출력
	printf("%d\n", result);

	return 0;
}

int count_punct(char* str) 
{
	// 문장 부호의 갯수를 0으로 초기화
	int count = 0;
	// 문자열의 현재 위치의 값이 널 문자 '\0'가 아닐 동안만 반복
	while (*str != '\0') {
		// 현재 위치의 문자가 문장 부호일 경우
		if (ispunct(*str) == 0) {
			count++; // 문장 부호의 갯수 증가
		}
		str++;
	}

	return count;
};