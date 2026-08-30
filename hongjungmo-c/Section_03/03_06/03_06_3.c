// 3.6 정수의 오버플로우
/*
	헤더 파일 <limits.h>
	자료형의 최대 크기와 최소 크기가 정의되어 있다. 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // 자료형의 최대 크기에 대한 매크로 상수가 포함된 헤더 파일
int main(void)
{
	// unsigned int의 크기는 8[Byte] = 32[bit]
	// unsigned int가 가질 수 있는 최대값
	unsigned int unsigned_int_max = 0b11111111111111111111111111111111; 
	printf("%u\n", unsigned_int_max);

	// 헤더 파일 limit.h에 포함된 매크로 UINT_MAXㄴ
	unsigned int unsigned_int_max_macro = UINT_MAX;
	printf("%u\n", unsigned_int_max_macro); // 결과 : 4294967295
	// 형식 지정자를 %u가 아닌 %d로 할 경우
	printf("%d\n", unsigned_int_max_macro); // 결과 : -1

	// unsigned int
	// 최대값
	unsigned int u_int_max = UINT_MAX;
	printf("max of uint = %u\n", u_int_max); // 결과 : 4294967295
	// 최소값
	unsigned int u_int_min = 0;
	printf("min of uint = %u\n", u_int_min); // 결과 : 0

	// signed int
	// 최대값
	int s_int_max = INT_MAX;
	printf("max of int = %d\n", s_int_max); // 결과 : 2147483647
	// 최소값
	int s_int_min = INT_MIN;
	printf("min of int = %d\n", s_int_min); // 결과 : -2147483648

	return 0;
}