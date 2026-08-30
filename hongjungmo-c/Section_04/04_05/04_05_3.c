// 4.5 기호적 상수와 전처리문 #define
/*
	기호적 상수 (Symbolic Constant)
	값이 저장된 메모리 공간의 이름(변수명)을 갖는 상수

	기호적 상수의 정의
	1) 전처리문 #define 사용
	2) 'const' 키워드 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 2) 'const' 키워드 사용
	const float pi = 3.141592f;

	// 한 번 'const' 키워드로 정의된 상수는 그 값을 바꿀 수 없다.
	pi = 10.0f;

	return 0;
}