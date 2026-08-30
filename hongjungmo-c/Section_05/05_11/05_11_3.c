// 5.11 자료형 변환
/*
	자료형 변환 순위 (Type Conversion Rank)
	자료형이 다른 피연산자 간의 연산에서 순위가 높은 피연산자의 자료형으로 변환다.
	- 실수형의 순위
		long double
		double
		float
	- 정수형의 순위
		long long, unsigned long long
		long, unsigned long
		int, unsigned
		short, unsigned short
		char, unsigned char
		_Bool
*/

#include <stdio.h>
int main(void)
{
	double d = 1.23;
	float f = 2.46f;

	double d_result = d + f;
	float f_result = d + f; // warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data

	return 0;
}