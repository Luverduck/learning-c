// 3.14 복소수형
/*
	복소수형 선언
	Visual Studio에서 복소수형은 구조체 형태로 선언한다.
	_Fcomplex : float형 복소수
	_Dcomplex : double형 복소수
	_Lcomplex : long double형 복소수
*/

#include <stdio.h>
#include <complex.h>
int main(void)
{
	// _Fcomplex
	_Fcomplex z_float = { 1.0f, 0.5f };
	printf("%f\n", crealf(z_float)); // 실수부 출력
	printf("%f\n", cimagf(z_float)); // 허수부 출력

	// _Dcomplex
	_Dcomplex z_double = { 1.0, 0.5 };
	printf("%f\n", creal(z_double)); // 실수부 출력
	printf("%f\n", cimag(z_double)); // 허수부 출력

	// _Lcomplex
	_Lcomplex z_long_double = { 1.0l, 0.5l };
	printf("%f\n", creall(z_long_double)); // 실수부 출력
	printf("%f\n", cimagl(z_long_double)); // 허수부 출력

	return 0;
}