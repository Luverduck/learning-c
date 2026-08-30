// 7.11 최대, 최소, 평균 구하기 예제
/*
	TO DO : 입력한 값들 중 최대값, 최소값과 입력한 모든 값에 대한 평균값을 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, temp, count = 0;
	int max, min;
	double sum = 0;

	// 문제점 : 첫 입력 때 max와 min을 동시에 초기화할 수 있는 방법이 필요하다.
	// 해결책 : count가 1일 때 직접 대입해서 초기화한 후 continue로 다음 루프로 건너뛴다.

	while (scanf("%d", &num) == 1) {
		
		count++;
		sum += num;

		// count가 1일 때 (첫 입력일 때)
		if (count == 1) {
			max = num, min = num;
			continue;
		}

		if (num > max) {
			max = num;
		}

		if (num < min) {
			min = num;
		}
	}

	printf("maximum : %d, minimum : %d, average : %lf\n", max, min, sum / count);

	return 0;
}