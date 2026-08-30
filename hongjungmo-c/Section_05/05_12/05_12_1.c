// 5.12 함수의 매개변수와 인수
/*
	매개변수(Parameter)
	함수를 정의할 때 사용하는 변수(variable)

	인수(Argument)
	함수를 호출하기 위해 필요한 값(value)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw(int n); // 프로토타입 함수 선언 (ANSI function prototype declaration)

int main(void)
{
	int i = 5;
	char c = '#';
	float f = 7.1f;

	// 함수를 호출하기 위해 필요한 값(value)
	draw(i);
	draw((int)c);
	draw((int)f);

	return 0;
}

void draw(int n) // 함수를 정의할 때 사용하는 변수(variable)
{
	while (n-- > 0)
		printf("*");
	printf("\n");
};