// 11.6 다양한 문자열 함수들
/*
	문자열 합치기 (string concatenation)
	
	strcat / strncat 함수
	대상 문자열에 문자열을 덧붙인다.
	char *strcat( char *strTarget, const char *strSource );
	char *strncat( char *strTarget, const char *strSource, size_t count );
	- strTarget : 대상 문자열
	- strSource : 대상 문자열에 덧붙일 문자열
	- count : 대상 문자열에 덧붙일 문자의 수
*/

#include <stdio.h>
#include <string.h>

char* impl_strcat(char* strDestination, const char* strSource);

int main(void)
{
	// TO DO : strcat 함수 구현
	char str[100] = "";

	// 문자열 붙이기
	impl_strcat(str, "ABCDEF");
	impl_strcat(str, "123456");

	puts(str);
	
	return 0;
}

char* impl_strcat(char* strDestination, const char* strSource)
{
	// strTarget의 끝 메모리 주소
	char* ptr_strDestinationEnd = strDestination + strlen(strDestination);

	// strTarget의 끝 메모리에 strSource의 값을 순서대로 붙이기
	while (*strSource != '\0') {
		*ptr_strDestinationEnd++ = *strSource++;
	}

	// 덧붙인 strTarget의 맨 끝에 널 문자 붙이기
	*ptr_strDestinationEnd = '\0';

	return strDestination;
};