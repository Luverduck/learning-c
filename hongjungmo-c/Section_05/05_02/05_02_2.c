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

	int i;
	i = 10;
	// Data Object : 변수 선언으로 할당된 메모리
	// L-value : 할당된 메모리의 주소를 의미하는 변수명 i
	// R-value : 할당된 메모리에 저장되는 값 10

	return 0;
}