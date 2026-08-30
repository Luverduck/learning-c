// 10.16 다차원 배열을 함수에 전달하는 방법

#include <stdio.h>

// 기호적 상수 (symbolic constant)
#define ROWS 3
#define COLS 4

// 함수 호출시 2차원 배열을 인수로 전달 (1)
int sum_2d_1(int arr_2d[ROWS][COLS]);

int main(void)
{
	// 2차원 배열
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};
	
	// 2차원 배열 모든 요소의 합
	printf("%d\n", sum_2d_1(arr_2d));

	return 0;
}

// 함수 호출시 2차원 배열을 인수로 전달 (1)
// - 호출한 함수 내에서 2차원 배열 변수의 자료형은 int(*)[4] 이므로 행을 알아낼 수 없다.
// - 행의 값을 기호적 상수(전역 변수)로 정의하여 함수에서도 접근할 수 있도록 한다.
int sum_2d_1(int arr_2d[ROWS][COLS]) // arr_2d의 자료형 : int (*)[4]
{
	int sum = 0;
	for (int i = 0; i < ROWS; ++i) { // sizeof 연산자로 행을 구할 수 없다.
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); ++j) {
			sum += arr_2d[i][j];
		};
	};

	return sum;
};