// 3.5 정수와 실수
/*
	정수(Integer)
	0, 양의 정수, 음의 정수를 포함
	다루는 정수의 범위에 따라 자료형 앞에 signed 또는 unsigned가 붙음
	변수에 저장하는 10진수 정수의 값은 2진수로 변환되어 메모리에 저장

	실수(Real number)
	부동소수점(floating point) 표현법 사용
	변수에 저장하는 10진수 실수의 값은 2진수로 변환되어 메모리에 저장
*/

#include <stdio.h>
int main(void)
{
	// 실수 (Real Number) : 부호(sign), 지수(exponent), 가수(fraction)를 각각 서로 다른 비트에 저장
	// 단 정밀도 부동소수점 소수(Single Precision floating point Real number)
	// 32[bit] 중 부호 1[bit] / 지수 8[bit] / 가수 23[bit] 할당
	float float_num = 0.000012f;
	printf("%f\n", float_num);

	// 배 정밀도 부동소수점 소수(Double Precision floating point Real number)
	// 총 64[bit] 중 부호 1[bit] / 지수 11[bit]/ 가수 52[bit] 할당
	double double_num = 0.000012;
	printf("%Lf\n", double_num);

	return 0;
}