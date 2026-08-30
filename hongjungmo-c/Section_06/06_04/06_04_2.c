// 6.4 관계 연산자
/*
	관계 연산자 (Relational Operator)
	피연산자들을 비교하여 크다, 작다, 같다 등을 판정

	관계 연산자의 종류
	<	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 작으면 1을 반환
	<=	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 작거나 같으면 1을 반환
	>	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 크면 1을 반환
	>=	: 왼쪽의 피연산자가 오른쪽의 피연산자보다 크거나 같으면 1을 반환
	==	: 왼쪽의 피연산자가 오른쪽의 피연산자와 같으면 1을 반환
	!=	: 왼쪽의 피연산자가 오른쪽의 피연산자와 같지 않으면 1을 반환
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 사용자가 입력한 값이 PI의 값과 같은지 판정하는 프로그램
	// - 정확하게 일치하는지 판정하는 경우
	const double PI = 3.1415926535897932384626433832795;
	double guess = 0.0;

	printf("Input PI : ");
	scanf("%lf", &guess);;

	while (guess != PI) {
		printf("Fool! Try again.\n");
		scanf("%lf", &guess);
	}

	printf("Good!");

	return 0;
}