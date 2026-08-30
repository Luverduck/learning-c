// 7.6 소수 판단 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
int main(void)
{
	unsigned num;
	int isPrime = 0; // 소수인지 여부

	printf("Enter number : ");
	scanf("%d", &num);

	/*
		TO DO : Check if num is a prime number
		EX) num is 4, try num % 2, num % 3
		EX) num is 5, try num % 2, num % 3, num % 4
	*/

	unsigned div;

	// 초기값을 true로 지정
	isPrime = true;

	for (div = 2; div < num; ++div) 
	{
		if (num % div == 0) // 나누어지는 경우가 발견될 때 (1과 자기 자신 외 약수를 갖는 경우)
		{ 
			isPrime = false; // false로 변경
		}
	}

	if (isPrime) 
	{
		printf("%u is a prime number.\n", num);
	}
	else 
	{
		printf("%u is not a prime number.\n", num);
	}

	return 0;
}