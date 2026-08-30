// 3.2 변수와 상수
/*
	변수(Variable) : 값을 저장할 수 있는 메모리 공간을 의미하며 변수에 저장된 값은 변경 가능

	상수(Constant) : 값을 저장할 수 있는 메모리 공간을 의미하며 상수에 저장된 값은 변경 불가능
	1) 리터럴 상수 (Literal Constant) : 값이 저장된 메모리 공간의 이름(변수명)을 갖지 않는 상수
		- 정수형 리터럴 상수
		- 실수형 리터럴 상수
		- 문자형 리터럴 상수
	2) 심볼릭 상수 (Symbolic Constant) : 값이 저장된 메모리 공간의 이름(변수명)을 갖는 상수
*/

#include <stdio.h>
int main(void)
{
	// 변수 (Variable)
	int angel = 1004;

	// 상수 (Constant)
	// 1) 리터럴 상수 (Literal Constant)
	10;	// 정수형 리터럴 상수
	1.5;	// 실수형
	'a';	// 문자형

	// 2) 심볼릭 상수 (Symbolic Constant)
	const int angel_const = 1004;

	return 0;
}