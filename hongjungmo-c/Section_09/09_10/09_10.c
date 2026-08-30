// 9.10 피보나치 예제와 재귀 호출의 장단점
/*
	Fibonacci sequence
	1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
	ex) fibonacci(5) = 3 + 2 = fibonacci(4) + fibonacci(3)
	ex) fibonacci(5) = 8 = 5 + 3 = fibonacci(5) + fibonacci(4)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibonacci(int number);

int main(void)
{
	for (int count = 1; count < 6; ++count) {
		printf("fibonacci(%d) is %d\n", count, fibonacci(count));
		printf("\n");
	}
	return 0;
}

int fibonacci(int number) 
{
	printf("fibonacci with %d\n", number);

	if (number > 2)
	{
		return fibonacci(number - 1) + fibonacci(number - 2); // double recursion
	}
	else 
	{
		return 1;
	}
};