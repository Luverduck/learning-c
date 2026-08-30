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

		TO DO : 모든 약수 출력
	*/

	unsigned div;

	// 초기값을 true로 지정
	isPrime = true;

	for (div = 2; (div * div) <= num; ++div) // * 에스토스테네스의 체를 이용한 연산 횟수 줄이기
	{
		if (num % div == 0) 
		{
			isPrime = false;

			// div가 num의 제곱근일 경우와 제곱근이 아닐 경우로 분리
			if (num == div * div)
			{
				printf("%u is divisible by %u\n", num, div);
			}
			else
			{
				printf("%u is divisible by %u and %u\n", num, div, num/div);
			}
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