// 9.8 팩토리얼 예제
/*
	factorial
	0! = 1
	3! = 3 * 2 * 1
	5! = 5 * 4! 
	   = 5 * 4 * 3! 
	   = 5 * 4 * 3 * 2! 
	   = 5 * 4 * 3 * 2 * 1! 
	   = 5 * 4 * 3 * 2 * 1 * 0!
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 반복문으로 구현한 팩토리얼 함수
long loop_factorial(int n);

// 재귀 호출로 구현한 팩토리얼 함수
long recursive_factorial(int n);

int main(void)
{
	int n = 5;

	printf("%d! = %ld\n", n, loop_factorial(5));
	printf("\n");
	printf("%d! = %ld\n", n, recursive_factorial(5));

	return 0;
}

// 반복문으로 구현한 팩토리얼 함수
long loop_factorial(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;
};

// 재귀 호출로 구현한 팩토리얼 함수
long recursive_factorial(int n)
{
	if (n > 1)
		return n * recursive_factorial(n - 1);
	else
		return 1;
};