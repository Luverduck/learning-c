// 9.18 포인터형 매개변수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 123;
	int b = 456;

	// TODO 두 변수의 값을 서로 바꾸기
	int temp = a;
	a = b;
	b = temp;

	printf("%d %d", a, b);

	return 0;
}