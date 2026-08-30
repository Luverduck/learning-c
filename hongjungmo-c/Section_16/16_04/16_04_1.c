// 16.4 함수 같은 매크로
/*
	함수 같은 매크로 (Function-Like Macro)
	매크로 인수에 의해 매크로로 정의된 표현식의 결과가 결정되는 매크로

	 함수 같은 매크로를 사용할 때 주의할 점
	- 매크로 인수로 표현식을 작성할 때 인수에 소괄호 ( )를 포함하여 정의해야 한다.
*/

#define ADD1(X,Y) ((X)+(Y))
#define ADD2(X,Y) X+Y

#define SQUARE1(X) ((X)*(X))
#define SQUARE2(X) X*X

#include <stdio.h>
int main(void)
{
	// 연산자 우선순위에 의해 발생하는 문제
	printf("%d\n", 2 * ADD1(1, 3));
	// 결과 : 8   = 2 * (X + Y) = 2 * (1 + 3) = 2 * 4 = 8
	printf("%d\n", 2 * ADD2(1, 3));
	// 결과 : 5   = 2 * X + Y = 2 * 1 + 3 = 2 + 3 = 5

	printf("%d\n", 100 / SQUARE1(1 + 3));
	// 결과 : 6   = 100 / (1 + 3) * (1 + 3) = 100 / 4 * 4 = 100 / 16 = 6
	printf("%d\n", 100 / SQUARE2(1 + 3));
	// 결과 : 106 = 100 / 1 + 3 * 1 + 3 = 100 + 3 + 3 = 106

	return 0;
}