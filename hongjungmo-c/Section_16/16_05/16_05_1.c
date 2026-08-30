// 16.5 가변 인수 매크로
/*
	가변 인수 매크로 (Vari	adic Argument Macro)
	매크로 인수의 갯수를 가변적으로 조정할 수 있는 매크로
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // sqrt()

#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__);
// ...(ellipses)	: 가변 매크로 인수
// __VA_ARGS__		: 가변 매크로 인수를 사용하기 위해 미리 정의된 매크로

int main(void)
{
	double x = 48;
	double y;

	y = sqrt(x);

	PRINT(1, "x = %g\n", x);
	// 매크로 인수
	// X	: 1
	// ...	: "x = %g\n", x (2개)
	// 매크로 확장 결과
	// printf("Message 1: %g\n", x);

	PRINT(2, "x = %.2f, y = %.4f\n", x, y);
	// 매크로 인수
	// X	: 2
	// ...	: "x = %.2f, y = %.4f\n", x, y (3개)
	// 매크로 확장 결과
	// printf("Message 2: x = %.2f, y = %.4f\n", x, y);

	return 0;
}