// 16.13 표준 수학 라이브러리
/*
	math.h
	C 언어의 표준 라이브러리로, 여러 수학 함수를 포함하는 헤더 파일
	- 대부분의 함수들이 부동소수점을 다루며, 각도는 라디안을 사용한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <tgmath.h>

int main(void)
{
	// 피타고라스 정리 예제
	double t1 = sqrt(2.0f);
	// float sqrtf( float x ) 함수를 실행한다.
	double t2 = sqrt(2.0);
	// double sqrt( double x ) 함수를 실행한다.

	if (t1 == t2)
		printf("Identical\n");
	else
		printf("Not identical\n");
	// 결과 : Not identical

	return 0;
}