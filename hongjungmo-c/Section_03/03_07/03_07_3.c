// 3.7 다양한 정수형들

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int main(void)
{
	// char 출력
	char c = 65;
	printf("char = %hhd, %d, %c\n", c, c, c);
	// 결과 : char = 65, 65, A
	// %hhd 출력 : 숫자 65 출력 
	// %c로 출력 : ASCII 코드 65번에 대응하는 문자열 'A' 출력

	// short 출력
	short s = 200;
	printf("short = %hhd, %hd, %d\n", s, s, s);
	// 결과 : short = -56, 200, 200
	// %hhd 출력 : char의 최대 표현 범위 128을 넘어가기 때문에 정수 오버플로우 발생

	// unsigned int 출력
	unsigned int ui = 3000000000U;
	printf("unsigned int = %u, %d\n", ui, ui);
	// 결과 : unsigned int = 3000000000, -1294967296
	// %d 출력 : int의 최대 표현 범위 2147483647를 넘어가기 때문에 정수 오버플로우 발생

	// long 출력
	long l = 65537L;
	printf("long = %ld, %hd\n", l, l);
	// 결과 : long = 65537, 1
	// %hd 출력 : short의 최대 표현 범위 32767를 넘어가기 때문에 정수 오버플로우 발생

	// long long 출력
	long long ll = 12345678908642LL;
	printf("long long = %lld, %ld\n", ll, ll);
	// 결과 : long long = 12345678908642, 1942899938
	// %ld 출력 : long의 최대 표현 범위 2147483647를 넘어가기 때문에 정수 오버플로우 발생

	return 0;
}