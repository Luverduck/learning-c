// 14.7 구조체를 함수로 전달하는 방법
/*
	구조체 변수 자체를 전달하는 경우
	- 전달한 구조체 변수의 멤버를 함수 내 구조체 변수의 멤버로 복사

	구조체 변수의 주소를 전달하는 경우
	- 전달한 주소로 해당 구조체 변수를 참조
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

// 구조체 선언
struct Fortune {
	char bank_name[FUNDLEN];
	double bank_saving;
	char fund_name[FUNDLEN];
	double fund_invest;
};

// bank_saving과 fund_invest의 합을 반환
double sum(const struct Fortune* my_fortune_in_func)
{
	return my_fortune_in_func->bank_saving + my_fortune_in_func->fund_invest;
};

int main(void)
{
	// 구조체 변수 선언
	struct Fortune my_fortune = {
		"Well-Fargo",
		123.45,
		"JPMorgan Chase",
		6789.7
	};

	// 구조체 변수의 주소를 전달하는 경우
	double ret_val = sum(&my_fortune);

	// 결과 출력
	printf("Total : %f\n", ret_val);

	return 0;
}