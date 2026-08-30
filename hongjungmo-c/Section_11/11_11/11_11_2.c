// 11.11 문자열을 숫자로 바꾸는 방법들
/*
	문자열을 숫자로 바꾸는 함수

	strol 함수 (string to long)
	대상 문자열에서 순서대로 문자를 `base`진법의 숫자로 해석하여 `long`로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 해당 문자의 주소를 `end`에 저장하고 변환된 `long`을 반환한 후 실행을 종료한다.
	long strtol( const char *str, char **end, int base );
	- str : 대상 문자열
	- end : 숫자로 해석할 수 없는 문자의 주소
	- base : 숫자 해석에 사용할 기수
	- [return] long : 변환한 수

	strtoul 함수 (string to unsigned long)
	대상 문자열에서 순서대로 문자를 `base`진법의 숫자로 해석하여 `unsigned long`로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 해당 문자의 주소를 `end`에 저장하고 변환된 `unsigned long`을 반환한 후 실행을 종료한다.
	unsigned long strtoul( const char *str, char **end, int base );
	- str : 대상 문자열
	- end : 숫자로 해석할 수 없는 문자의 주소
	- base : 숫자 해석에 사용할 기수
	- [return] unsigned long : 변환한 수

	strtod 함수 (string to double)
	대상 문자열에서 순서대로 문자를 10진법의 숫자로 해석하여 `double`로 변환한다.
	숫자로 해석할 수 없는 문자를 발견하면 해당 문자의 주소를 `end`에 저장하고 변환된 `double`을 반환한 후 실행을 종료한다.
	double strtod( const char *str, char **end );
	- str : 대상 문자열
	- end : 숫자로 해석할 수 없는 문자의 주소
	- [return] double : 변환한 수
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // atoi(), atof(), atol()

int main(int argc, char* argv[])
{
	// strol 함수 (string to long)
	char str_1[] = "1024hello";
	char* end_1;
	long result_1 = strtol(str_1, &end_1, 10);
	printf("%s %ld %s\n", str_1, result_1, end_1);

	// strtoul 함수(string to unsigned long)
	char str_2[] = "1024hello";
	char* end_2;
	unsigned long result_2 = strtoul(str_2, &end_2, 16); // (1 * 16^3) + (0 * 16^2) + (2 * 16^1) + (4 * 16^0)
	printf("%s %ld %s\n", str_2, result_2, end_2);

	// strtod 함수 (string to double)
	char str_3[] = "1024hello";
	char* end_3;
	double result_3 = strtod(str_3, &end_3); // strtod는 base를 지정할 수 없다.
	printf("%s %f %s\n", str_3, result_3, end_3);

	return 0;
}