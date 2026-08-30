// 3.6 정수의 오버플로우
/*
	오버플로우 (Overflow)
	컴퓨터의 산술 연산(arithmetic operation)이 허용된 표현 범위를 초과하는 값을 생성할 때 발생하는 오류
*/

#include <stdio.h>
#include <limits.h> // 자료형의 최대 크기에 대한 매크로 상수가 포함된 헤더 파일
int main(void)
{
	// unsigned int가 가질 수 있는 최대값 4294967295 를 초과할 경우
	unsigned int u_int_max = UINT_MAX + 1; // 예상 결과 : 4294967295 + 1 = 4294967296
	printf("%u\n", u_int_max); // 실제 결과 : 0

	return 0;
}