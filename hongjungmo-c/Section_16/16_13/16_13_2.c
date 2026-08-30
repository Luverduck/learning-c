// 16.13 표준 수학 라이브러리
/*
	math.h
	C 언어의 표준 라이브러리로, 여러 수학 함수를 포함하는 헤더 파일
	- 대부분의 함수들이 부동소수점을 다루며, 각도는 라디안을 사용한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 매크로 인수 X의 자료형에 따라 다른 함수가 실행되도록 매크로 정의
#define SQRT(X) _Generic((X), long double : sqrtl, default : sqrt, float : sqrtf)(X)

int main(void)
{
	// 피타고라스 정리 예제
	// 인수의 자료형에 따라 서로 다른 함수를 실행하도록 구현 ( _Generic 사용 )
	double t1 = SQRT(2.0f);  // float의 정밀도로 계산된 값
	double t2 = SQRT(2.0);   // double의 정밀도로 계산된 값

	// t1과 t2의 인수의 정밀도가 서로 다르므로 계산 결과가 다르다.
	if (t1 == t2)
		printf("Identical\n");
	else
		printf("Not identical\n");

	return 0;
}