// 16.13 표준 수학 라이브러리
/*
	math.h
	C 언어의 표준 라이브러리로, 여러 수학 함수를 포함하는 헤더 파일
	- 대부분의 함수들이 부동소수점을 다루며, 각도는 라디안을 사용한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	// 피타고라스 정리 예제
	
	// double일 경우
	double c = 5.0, b = 4.0, a;  // a = ?
	a = sqrt((c * c) - (b * b)); // a = sqrt(pow(c, 2) - pow(b, 2));
	printf("a  = %f\n", a);

	// float일 경우
	float cf = 5.0f, bf = 4.0f, af; // a = ?
	af = sqrtf((cf * cf) - (bf * bf)); // a = sqrt(pow(c, 2) - pow(b, 2));
	printf("af = %f\n", af);

	return 0;
}