// 11.6 다양한 문자열 함수들
/*
	문자열 복사 (string copy)

	strcpy / strncpy 함수
	문자열을 복사한다.
	char *strcpy( char *strDestination, const char *strSource );
	char *strncpy( char *strDestination, const char *strSource, size_t count );
	- strDestination : 대상 문자열
	- strSource : 대상 문자열에 복사할 문자열
	- count : 복사할 문자의 수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	// strcpy / strncpy 함수 예제(주의할 점)
	char strDestination[12] = "Black Berry";
	char strSource[] = "Green";

	// strcpy 함수는 strSource의 모든 문자열을 strDestination에 복사한다.
	// strDestination에 strSource의 모든 문자열을 복사
	strcpy(strDestination, strSource);
	puts(strDestination);

	// strncpy 함수는 strSource에서 count 만큼의 문자열만 strDestination에 복사한다.
	// 또한, 복사한 문자열에 문자열의 끝을 의미하는 널 문자 `\0`를 자동으로 추가해주지 않는다.
	// strDestination에 strSource의 5개 문자열만 복사
	strncpy(strDestination, strSource, 5);
	puts(strDestination);

	return 0;
}
