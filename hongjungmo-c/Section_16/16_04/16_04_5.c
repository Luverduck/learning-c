// 16.4 함수 같은 매크로
/*
	토큰 결합 연산자 ## (Token-Pasting Operator)
	분리되어있는 토큰을 하나로 결합한다.
*/

#define XNAME(N) X ## N
#define PRINT_XNAME(N) printf("x" #N " = %d\n", X ## N);

#include <stdio.h>
int main(void)
{
	int XNAME(1) = 1;
	// 매크로 확장 결과 : int x1 = 1;
	int XNAME(2) = 2;
	// 매크로 확장 결과 : int x2 = 2;

	PRINT_XNAME(1);
	// printf("x1 = %d\n", x1);
	PRINT_XNAME(2);
	// printf("x2 = %d\n", x2);

	return 0;
}