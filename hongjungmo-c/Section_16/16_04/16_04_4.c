// 16.4 함수 같은 매크로
/*
	문자열화 연산자 # (Stringizing Operator)
	매크로 인수를 문자열로 만든다.
*/

#define SQUARE(X) ((X)*(X))

// 문자열화 연산자가 적용되지 않은 경우
#define PRINT_SQR1(X) printf("The square of %d is %d.\n", X, SQUARE(X));

// 문자열화 연산자가 적용된 경우
#define PRINT_SQR2(X) printf("The square of " #X " is %d.\n", SQUARE(X));

#include <stdio.h>
int main(void)
{
	PRINT_SQR1(10);
	PRINT_SQR2(10);

	return 0;
}