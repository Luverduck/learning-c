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
#include <limits.h>
#include <float.h>
int main(void)
{
	// 실수형 -> 실수형 : 가수부를 초과하는 비트의 값 절삭(truncation)
	// 실수형 변환에서 절삭이 일어나면 항상 값이 감소해야 하는데 왜 하나는 증가하고 하나는 감소하는가?

	double double_3_1 = 3.1415928;
	float float_3_1 = double_3_1;
	printf("\ndouble to float\n");
	printf("double value:\t%.7f\n", double_3_1);	// 결과 : 3.1415928
	printf("float value:\t%.7f\n", float_3_1);		// 결과 : 3.1415927
	
	
	double double_3_2 = 3.1415929;
	float float_3_2 = double_3_2;
	printf("double value:\t%.7f\n", double_3_2);	// 결과 : 3.1415929
	printf("float value:\t%.7f\n", float_3_2);		// 결과 : 3.1415930

	return 0;
}