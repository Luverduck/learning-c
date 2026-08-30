// 16.4 함수 같은 매크로
/*
	함수 같은 매크로 (Function-Like Macro)
	매크로 인수에 의해 매크로로 정의된 표현식의 결과가 결정되는 매크로

	 함수 같은 매크로를 사용할 때 주의할 점
	- 매크로 인수로 표현식을 작성할 때 인수에 소괄호 ( )를 포함하여 정의해야 한다.
*/

#define SQUARE1(X) ((X)*(X))
#define SQUARE2(X) X*X

#include <stdio.h>
int main(void)
{
	// 표현식 형태의 인수 입력에 의한 문제
	printf("%d\n", SQUARE1(1+3));
	// 결과 : 16	= (1 + 3) * (1 + 3) = 4 * 4 = 16
	printf("%d\n", SQUARE2(1+3));
	// 결과 : 7	= 1 + 3 * 1 + 3 = 1 + 3 + 3 = 7

	return 0;
}