// 5.3 더하기, 빼기, 부호 연산자들
/*
	산술 연산자 (Arithmetic Operator)
	사칙 연산에 사용되는 이항 연산자
	+	: 왼쪽의 피연산자에 오른쪽의 피연산자를 더한다.
	-	: 왼쪽의 피연산자에 오른쪽의 피연산자를 뺀다.
	*	: 왼쪽의 피연산자에 오른쪽의 피연산자를 곱한다.
	/	: 왼쪽의 피연산자에 오른쪽의 피연산자로 나눈 몫을 구한다.
	%	: 왼쪽의 피연산자에 오른쪽의 피연산자로 나눈 나머지를 구한다.
*/

#include <stdio.h>
int main(void)
{
	int income, salary, bonus;
	salary = 100;
	bonus = 30;
	// 덧셈 연산자
	income = salary + bonus;

	int takehome, tax;
	tax = 20;
	// 뺄셈 연산자
	takehome = income - tax;

	return 0;
}