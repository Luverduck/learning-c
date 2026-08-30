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
	// 오버플로우 2) 자료형이 가질 수 있는 최소값보다 작은 값을 저장할 때
	// unsigned int가 가질 수 있는 최소값 0보다 작은 값을 저장할 경우
	unsigned int u_int_min = 0 - 1;

	// i to binary representation
	char buffer[33];
	// 문자 33개를 메모리에 나란히 저장할 수 있는 배열 선언 
	// ( unsigned int의 최대 크기가 32[bit] 이지만 33개 문자열을 지정한 이유는 문자열의 끝을 나타내는 구분자 '\0'을 넣기 위함 )
	_itoa(u_int_min, buffer, 2);
	// 입력한 10진수 'u_int_min'를 '2'진수로 변환하여 'buffer'에 저장

	// print decimal and binary
	printf("decimal : %u\n", u_int_min); // 결과 : 4294967295
	printf("binary : %s\n", buffer); // 결과 : 11111111111111111111111111111111

	// 해설
	// u_int_min = 00000000000000000000000000000000 - 00000000000000000000000000000001
	// 00000000000000000000000000000000를 오버플로우 값인 100000000000000000000000000000000로 바꿔서 계산 
	// 100000000000000000000000000000000 - 000000000000000000000000000000001 = 011111111111111111111111111111111
	// 최고 자릿수 비트 '0'을 버림한 값 11111111111111111111111111111111를 저장한다.

	return 0;
}