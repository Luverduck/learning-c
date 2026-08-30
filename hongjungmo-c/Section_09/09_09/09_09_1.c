// 9.9 이진수 변환 예제
/*
	십진수를 이진수로 변환
	십진수 10에 대하여
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
	십진수 10을 이진수로 변환한 결과는 1010
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 반복문으로 구현한 이진수 변환
void print_binary_loop(unsigned long num);

// 재귀 호출로 구현한 이진수 변환
void print_binary_recursive(unsigned long num);

int main(void)
{
	unsigned long num = 10;

	//print_binary_loop(num);

	print_binary_recursive(num);

	return 0;
}

// 반복문으로 구현한 이진수 변환 (문제점 : 각 자리의 숫자가 역순으로 출력된다)
void print_binary_loop(unsigned long num)
{
	while (1) 
	{
		int quotient = num / 2;
		int remainder = num % 2;

		printf("%d", remainder); // remainder is 0 or 1
		
		num = quotient;

		if (quotient == 0) {
			break;
		}
	}
};

// 재귀 호출로 구현한 이진수 변환
void print_binary_recursive(unsigned long num)
{
	int remainder = num % 2;

	if (num >= 2) {
		print_binary_recursive(num / 2);
	}

	printf("%d", remainder);
};