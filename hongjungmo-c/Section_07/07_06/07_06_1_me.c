// 7.6 소수 판단 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	unsigned num;
	int isPrime = 0; // 소수인지 여부

	printf("Enter number : ");
	scanf("%u", &num);

	/*
		TO DO : Check if num is a prime number
		EX) num is 4, try num % 2, num % 3
		EX) num is 5, try num % 2, num % 3, num % 4
	*/

	// 의사 코드 작성
	// 입력한 수 X를 1, 2, 3, ... X까지 나눌 떄 나머지가 0인 경우가 단 1번일 경우(count = 1)만 소수로 판정

	if (num == 2 || num == 3) 
	{
		isPrime = 1;
	}
	else {
		int count = 0;
		for (int i = 2; i <= num; i++) 
		{
			if (num % i == 0) 
			{
				count += 1;
			}
		}
		if (count == 1)
			isPrime = 1;
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