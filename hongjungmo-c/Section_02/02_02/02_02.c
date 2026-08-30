// 2.2 C 프로그램 훑어보기

#include <stdio.h>				// 전처리기 (Preprocessor instruction)
int main(void)					// main 함수 시작
{								// 영역(Scope)의 시작
	int a;						// 변수의 선언 (Declaration)
	int b;
	int c;

	a = 1;						// 변수에 값 할당 (Allocation)
	b = 2;

	c = a + b;					// 변수를 이용한 연산 (Operation)

	printf("Result is %i", c);	// 함수 호출 (Call 또는 Revoke)

	return 0;					// 결과값 반환 (Return)
}