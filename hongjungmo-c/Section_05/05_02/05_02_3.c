// 5.2 대입 연산자와 몇 가지 용어들
/*
	대입 연산자 (Assignment Operator)
	왼쪽의 피연산자에 오른쪽의 피연산자를 대입

	대입 연산자와 관련된 용어들
	Data Object : 할당된 메모리 공간 (object)
	L-value : 메모리 주소값 (object locator value)
	R-value : 표현식의 값 (value of an expression)
*/

#include <stdio.h>
int main(void)
{
	// 수정 불가능한 L-value
	const int num_const = 1; // 여기서 기호 '='는 대입이 아니라 초기화를 의미한다. 

	// 수정 가능한 L-value
	int num_a;
	int num_b;
	int num_c;

	num_a = 1;
	num_b = num_a;
	num_c = num_const * (num_a + num_b); // 여기서 (num_a + num_b)는 계산이 끝나면 사라지는 R-value

	return 0;
}