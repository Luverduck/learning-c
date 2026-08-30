// 7.11 최대, 최소, 평균 구하기 예제
/*
	TO DO : 입력한 값들 중 최대값, 최소값과 입력한 모든 값에 대한 평균값을 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>
int main(void)
{

	// 문제점 : 첫 입력 때 max와 min을 동시에 초기화할 수 있는 방법이 필요하다.
	float max = -FLT_MAX; // max의 값을 float가 가질 수 있는 최소값으로 초기화
	float min = FLT_MAX; // min의 값을 float가 가질 수 있는 최대값으로 초기화

	float sum = 0.0f;
	float input;

	int n = 0;

	while (scanf("%f", &input) == 1) {
		// 초기화된 max에 저장된 값은 input보다 작으므로 input의 값이 max로 저장된다.
		max = (input > max) ? input : max;
		// 초기화된 min에 저장된 값은 input보다 크므로 input의 값이 min으로 저장된다.
		min = (input < min) ? input : min;
		// 입력값의 합
		sum += input;
		// 입력받은 수 
		n++;
	}

	printf("min = %lf, max = %lf, avg = %lf\n", min, max, sum / n);

	return 0;
}