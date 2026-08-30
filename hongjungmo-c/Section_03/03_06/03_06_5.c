// 3.6 정수의 오버플로우
/*
	오버플로우 (Overflow)
	컴퓨터의 산술 연산(arithmetic operation)이 허용된 표현 범위를 초과하는 값을 생성할 때 발생하는 오류
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> // 자료형의 최대 크기에 대한 매크로 상수가 포함된 헤더 파일
#include <stdlib.h> // C언어 표준 라이브러리 (Standard Library)

int main(void)
{
	// 오버플로우 1) 자료형이 가질 수 있는 최대값보다 큰 값을 저장할 때
	// unsigned int가 가질 수 있는 최대값 4294967295보다 큰 값을 저장할 경우
	unsigned int u_int_max = UINT_MAX + 1;

	// i to binary representation
	char buffer[33]; 
	// 문자 33개를 메모리에 나란히 저장할 수 있는 배열 선언 
	// ( unsigned int의 최대 크기가 32[bit] 이지만 33개 문자열을 지정한 이유는 문자열의 끝을 나타내는 구분자 '\0'을 넣기 위함 )
	_itoa(u_int_max, buffer, 2);
	// 입력한 10진수 'u_int_max'를 '2'진수로 변환하여 'buffer'에 저장

	// print decimal and binary
	printf("decimal : %u\n", u_int_max); // 결과 : 0
	printf("binary : %s\n", buffer); // 결과 : 0

	// 해설
	// u_int_max = 100000000000000000000000000000000 (33자리 - 숫자 '1'이 1개, 숫자 0이 32개)
	// 최고 자릿수 비트인 '1'을 버림한 값 00000000000000000000000000000000을 저장한다.
	// u_int_max에 저장된 값 : 00000000000000000000000000000000

	return 0;
}