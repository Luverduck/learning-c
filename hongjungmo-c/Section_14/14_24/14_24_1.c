// 14.24 복잡한 선언을 해석하는 요령
/*
	해석 요소
	*  : 포인터
	() : 함수
	[] : 배열

	복잡한 선언의 해석 (Deciphering Complex Declarations - K.N.K 18.4)
	1) 괄호 안에서 바깥 방향으로 읽는다.
	2) (), []의 우선순위가 * 보다 높다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1.
	int* ap[10]; // 식별자 ap는 배열이며, 10개의 int* 요소를 갖는다.

	typedef int* pint;
	pint ap[10]; // typedef로 정의한 ap

	// 2.
	float* fp(float); 
	// 식별자 fp는 float형 매개변수를 갖는 함수이다.
	// 함수 실행의 결과로 float* 를 반환한다.

	// 3. 
	void (*pf)(int); 
	// 식별자 pf는 int형 매개변수를 갖는 함수이다. 
	// 함수 실행의 결과로 아무 것도 반환하지 않는다.

	// 4. 
	int* (*x[10])(void); 
	// 식별자 x는 매개변수가 없는 함수이다.
	// 함수 실행의 결과로 int* 를 반환한다.

	return 0;
}