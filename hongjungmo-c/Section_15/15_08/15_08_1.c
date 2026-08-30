// 15.8 RGBA 색상 비트 마스크 연습문제
/*
	16진수의 RGBA 코드를 10진수의 R, G, B, A로 분해
	- 16진수의 자릿수 각각은 0 ~ 15 사이의 숫자를 가질 수 있다.
	  따라서 하나의 16진수 자릿수를 표기하기 위해 4개의 비트(bit)가 필요하다. ( 2^4 = 16 )
	  16진수를 두 자리씩 끊어서 R, G, B, A를 표현할 수 있다.
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define BYTE_MASK 0xff // Bit Mask

int main(void)
{
	// 16진수 RGBA 코드
	unsigned int rgba_color = 0x66CDAAFF; // (102, 205, 170, 255)

	// R, G, B, A
	unsigned char red, green, blue, alpha;

	// 비트 오른쪽 시프트 연산자 '>>' 사용
	alpha = rgba_color & BYTE_MASK;
	blue = (rgba_color >> 8 & BYTE_MASK);
	green = (rgba_color >> 16 & BYTE_MASK);
	red = (rgba_color >> 24 & BYTE_MASK);

	// 출력
	printf("(R, G, B, A) = (%hhu, %hhu, %hhu, %hhu)\n", red, green, blue, alpha);

	return 0;
}