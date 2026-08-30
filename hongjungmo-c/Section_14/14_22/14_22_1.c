// 14.22 함수 포인터의 사용 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h> // toupper(), tolower()

// 문자열을 모두 대문자로 바꾸는 함수
void ToUpper(char* str)
{
	while (*str) // ( *str != NULL )
	{
		*str = toupper(*str);
		str++;
	}
}

// 문자열을 모두 소문자로 바꾸는 함수
void ToLower(char* str) // ( *str != NULL )
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

int main(void)
{
	// 변환할 문자열 선언
	char str[] = "Hello, World!";

	// 함수 포인터 선언 및 초기화
	void (*ptr_func)(char*) = NULL;

	// 함수 포인터의 값을 대문자 변환 함수의 주소로 초기화
	ptr_func = &ToUpper;

	// 대문자 변환 함수 실행 전 출력 
	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function Pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	// 대문자 변환 함수 실행
	(*ptr_func)(str);

	// 대문자 변환 함수 실행 후 출력
	printf("ToUpper %s\n", str);

	// 함수 포인터의 값을 소문자 변환 함수의 주소로 초기화
	ptr_func = &ToLower;

	// 소문자 변환 함수 실행 전 출력
	printf("String literal %lld\n", (long long)("Hello, World!"));
	printf("Function Pointer %lld\n", (long long)ToUpper);
	printf("Variable %lld\n", (long long)str);

	// 소문자 변환 함수 실행
	(*ptr_func)(str);

	// 소문자 변환 함수 실행 후 출력
	printf("ToUpper %s\n", str);

	return 0;
}