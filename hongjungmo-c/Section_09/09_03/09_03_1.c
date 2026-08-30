// 9.3 함수의 자료형과 반환값
/*
	함수의 자료형
	함수 실행 후 반환하는 결과의 자료형을 함수의 자료형이라 한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 원형 선언시 반환형이 int일 경우 컴파일러가 반환형을 int로 가정(assuming)하여 처리한다.
// 단, 반환형이 int가 아닐 경우 반드시 자료형을 명시해야 한다.
int_min(int, int);

int main(void)
{
	int_min(1, 2);

	int i1, i2;

	while (1)
	{
		printf("Input two integer : ");
		
		if (scanf("%d %d", &i1, &i2) != 2) break;
		
		int lesser = int_min(i1, i2);
		
		printf("The lesser of %d and %d is %d\n", i1, i2, lesser);
	}

	return 0;
};

int_min(int i, int j) 
{
	int min;

	if (i < j)
		min = i;
	else
		min = j;

	return min;

	printf("Who am I?\n"); // return에서 값을 반환하며 실행을 종료하므로 return 아래 코드는 실행되지 않는다.
};