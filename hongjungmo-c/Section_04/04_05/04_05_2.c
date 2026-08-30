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

// 1) 전처리문 #define 
#define PI 3.141592f
#define AI_NAME "Jarvis"
// - 상수의 이름은 관습적으로 대문자를 사용한다.
// - 상수의 값을 변경하여 상수가 사용된 모든 부분의 코드를 쉽게 수정할 수 있다.

int main(void)
{
	float radius, area, circumference;

	// printf 할 값을 바꿀 때도 기호적 상수를 사용할 수 있다.
	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);

	area = PI * radius * radius; // area = pi * radius * radius
	circumference = 2.0f * PI * radius; // circumference = 2 * pi * radius

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circumference);

	return 0;
}