// 4.5 기호적 상수와 전처리기 #define
/*
	기호적 상수 (Symbolic Constant)
	값이 저장된 메모리 공간의 이름(변수명)을 갖는 상수

	기호적 상수의 정의
	1) 전처리문 #define 사용
	2) 'const' 키워드 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1) 전처리문 #define 사용
#define PI 3.141592f

int main(void)
{
	float radius, area, circumference;

	printf("Input radius\n");

	scanf("%f", &radius);

	// 값을 직접 입력할 경우
	//area = 3.141592f * radius * radius; // area = pi * radius * radius
	//circumference = 2.0f * 3.141592f * radius; // circumference = 2 * pi * radius

	// 기호적 상수 PI를 사용할 경우
	area = PI * radius * radius; // area = pi * radius * radius
	circumference = 2.0f * PI * radius; // circumference = 2 * pi * radius
	// 컴파일할 때 PI가 3.141592f 로 대체된다.

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circumference);

	return 0;
}