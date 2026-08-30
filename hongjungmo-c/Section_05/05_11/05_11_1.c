// 5.11 자료형 변환
/*
	자료형 변환 (Type Conversion)
	변수의 자료형을 다른 자료형으로 변환하는 것

	자료형의 승격 (promotion)
	크기가 작은 자료형을 크기가 큰 자료형으로 변환하는 것
	
	자료형의 강등 (demotion)
	크기가 큰 자료형을 크기가 작은 자료형으로 변환하는 것
*/

#include <stdio.h>
int main(void)
{
	// 자료형 승격(promotion)
	short s = 100;
	int i = s;

	// 자료형 강등(demotion)
	double d = 1.123;
	float f = d; // warning C4244: 'initializing': conversion from 'double' to 'float', possible loss of data

	return 0;
}