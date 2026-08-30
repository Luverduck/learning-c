// 10.6 2차원 배열 연습문제

#define _CRT_SECURE_NO_WARNINGS

#define MONTHS 12
#define YEARS 3

#include <stdio.h>

int main(void)
{
	// 평균 기온
	double year2021[MONTHS] = { -2.4, 2.7, 9.0, 14.2, 17.1, 22.8, 28.1, 25.9, 22.6, 15.6, 8.2, 0.6 };
	double year2022[MONTHS] = { -2.2, -1.1, 7.7, 14.8, 19.1, 23.3, 27.3, 25.7, 22.4, 14.6, 10.0, -2.8 };
	double year2023[MONTHS] = { -1.5, 2.3, 9.8, 13.8, 19.5, 23.4, 26.7, 27.2, 23.7, 15.8, 6.8, 3.1 };

	// 2. 구현한 2차원 배열을 이용하여 3년 동안의 연 평균 기온 출력
	double temperature[YEARS][MONTHS] =
	{
		{ -2.4, 2.7, 9.0, 14.2, 17.1, 22.8, 28.1, 25.9, 22.6, 15.6, 8.2, 0.6 },
		{ -2.2, -1.1, 7.7, 14.8, 19.1, 23.3, 27.3, 25.7, 22.4, 14.6, 10.0, -2.8 },
		{ -1.5, 2.3, 9.8, 13.8, 19.5, 23.4, 26.7, 27.2, 23.7, 15.8, 6.8, 3.1 }
	};

	printf("[Yearly average temperatures of 3 years]\n");
	for (int i = 0; i < YEARS; ++i) {
		double sum_yearly = 0.0;
		for (int j = 0; j < MONTHS; ++j) {
			sum_yearly += temperature[i][j];
		};
		printf("Year %d : average temperature = %.1f\n", i, sum_yearly / MONTHS);
	};

	return 0;
}