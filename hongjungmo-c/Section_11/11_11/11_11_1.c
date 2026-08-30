// 11.11 문자열을 숫자로 바꾸는 방법들
/*
	문자열을 숫자로 바꾸는 함수

	atoi 함수 (string to integer)
	대상 문자열에서 순서대로 문자를 숫자로 해석하여 `int`로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 변환된 `int`를 반환한 후 실행을 종료한다.
	int atoi( const char *str );
	- str : 대상 문자열
	- [return] int : 변환한 수

	atof 함수 (string to float)
	대상 문자열에서 순서대로 문자를 숫자로 해석하여 `double`로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 변환된 `double`를 반환한 후 실행을 종료한다.
	double atof( const char *str );
	- str : 대상 문자열
	- [return] double : 변환한 수

	atol() : string to long
	대상 문자열에서 순서대로 문자를 숫자로 해석하여 `long`으로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 변환된 `long`을 반환한 후 실행을 종료한다.
	long atol( const char *str );
	- str : 대상 문자열
	- [return] long : 변환한 수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi(), atof(), atol()

int main(int argc, char* argv[])
{
	// atoi 함수
	char str_1[] = "1024hello";
	int result_1 = atoi(str_1);
	printf("%d\n", result_1);

	// atof 함수
	char str_2[] = "10.54ab33";
	double result_2 = atof(str_2);
	printf("%f\n", result_2);

	// atol 함수
	char str_3[] = "102433132131";
	long result_3 = atol(str_3);
	printf("%ld\n", result_3);

	return 0;
}