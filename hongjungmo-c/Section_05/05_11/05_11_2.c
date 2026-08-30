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
	// 자료형 강등이 발생할 때 데이터 손실이 생길 수 있다.
	// 정수형 -> 정수형 : 상위 비트 손실
	int int_1 = SHRT_MAX + 1;
	short short_1 = int_1;
	printf("int to short\n");
	printf("int value:\t%d\n", int_1);			// 결과 : 32768
	printf("short value:\t%d\n", short_1);		// 결과 : -32768

	// 실수형 -> 정수형 : 소수점 이하 절삭(truncation)
	double double_2 = 3.234;
	int int_2 = double_2;
	printf("\ndouble to int\n");
	printf("double value:\t%A\n", double_2);	// 결과 : 3.234000
	printf("int value:\t%A\n", (float)int_2);	// 결과 : 3.000000

	// 실수형 -> 실수형 : 가수부를 초과하는 비트의 값 절삭(truncation)
	double double_3 = 3.1415928;
	float float_3 = double_3;
	printf("\ndouble to float\n");
	printf("double value:\t%.7f\n", double_3);	// 결과 : 3.1415928
	printf("float value:\t%.7f\n", float_3);	// 결과 : 3.1415927
	
	// 실수형 간의 강등에서 변환한 자료형이 가수부 비트를 모두 표시할 수 있다면 절삭이 발생하지 않는다.
	double double_4 = 1.25;
	float float_4 = double_4;
	printf("\ndouble to float (special case)\n");
	printf("double value:\t%A\n", double_4);	// 결과 : 0X1.4000000000000P+0
	printf("float value:\t%A\n", float_4);		// 결과 : 0X1.4000000000000P+0

	return 0;
}