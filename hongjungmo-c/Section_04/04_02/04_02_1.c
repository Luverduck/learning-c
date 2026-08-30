// 4.2 sizeof 연산자
/*
	sizeof 연산자
	피연산자로 전달된 상수나 변수에 해당하는 타입의 메모리 크기를 반환하는 연산자
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	// 상수의 자료형 크기 반환
	size_t size_constant = sizeof(int);
	printf("%u\n", size_constant);

	// 변수의 자료형 크기 반환
	int a = 0;
	// 1) sizeof 변수명
	size_t size_variable_case1 = sizeof a;
	printf("%u\n", size_variable_case1);
	// 2) sizeof(변수명)
	size_t size_variable_case2 = sizeof(a);
	printf("%u\n", size_variable_case2);
};