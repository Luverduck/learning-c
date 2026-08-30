// 3.12 부동 소수점 방식의 한계

#include <stdio.h>
#include <float.h> // float형 관련 헤더 파일
int main(void)
{
	// round-off error 
	// ex1) 숫자 규모의 차이가 크면 작은 숫자가 무시된다.
	float ex1_f1, ex2_f2;
	ex1_f1 = 1.0E20f + 1.0f;
	ex2_f2 = ex1_f1 - 1.0E20f;
	printf("%f\n", ex2_f2);

	// round-off error ex2)
	float ex2_f = 0.0f;
	for (int i = 0; i < 100; i++) {
		ex2_f = ex2_f + 0.01f; // 예상 결과 : 0.01을 100번 더하면 1.0이 되어야 한다.
	}
	printf("%f\n", ex2_f); // 실제 결과 : 0.999999
	// 실수 0.1을 정확하게 표현할 수 있는 2진수는 존재하지 않는다. (0.0625 < 0.1 < 0.125)
	// 따라서 2^-4의 결과값인 0.0625와 그 아래 숫자를 더하여 0.1에 근사하도록 한다.
	// 자릿수가 낮은 수를 더하면 더할수록 합계가 0.1에 더 가까워지지만 
	// float가 저장할 수 있는 비트 수(표현 범위)는 32[bit]로 한정되어 있다.

	// overflow : 실수의 값이 표현 범위의 최대값을 벗어나는 경우 inf로 표시
	float max = 3.402823466e+38F; // FLT_MAX
	printf("%f\n", max); // 결과 : 340282346638528859811704183484516925440.000000
	max = max * 100.0f;
	printf("%f\n", max); // 결과 : inf

	// underflow : 실수의 값이 표현 범위의 최소값을 벗어나는 경우 0으로 표시
	float min = -1.401298464e-45F; // FLT_TRUE_MIN
	printf("%e\n", min); // 결과 : -1.401298e-45
	min = min / 100.0f;
	printf("%e\n", min); // 결과 : -0.000000e+00

	return 0;
}