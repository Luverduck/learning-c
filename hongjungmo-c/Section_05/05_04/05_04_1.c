// 5.4 곱하기 연산자
/*
	산술 연산자 (Arithmetic Operator)
	사칙 연산에 사용되는 이항 연산자
	+	: 왼쪽의 피연산자에 오른쪽의 피연산자를 더한다.
	-	: 왼쪽의 피연산자에 오른쪽의 피연산자를 뺀다.
	*	: 왼쪽의 피연산자에 오른쪽의 피연산자를 곱한다.
	/	: 왼쪽의 피연산자에 오른쪽의 피연산자로 나눈 몫을 구한다.
	%	: 왼쪽의 피연산자에 오른쪽의 피연산자로 나눈 나머지를 구한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 복리 계산 프로그램
	double seed_money, target_money, annual_interest;

	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest(%%) : ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money) {
		fund = fund + ( (fund * annual_interest) / 100.0 );
		year_count = year_count + 1;
		printf("%f\n", fund);
	};

	printf("It takes %d year\n", year_count);

	return 0;
}