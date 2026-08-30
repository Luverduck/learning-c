// 10.18 복합 리터럴과 배열
/*
	복합 리터럴 (compound literal)
	배열, 구조체, 공동체 자료형의 이름 없는 객체
	( type ) { initializer-list };
*/

#include <stdio.h>

#define ROWS 2
#define COLS 3

int sum_1d(int arr_1d[COLS], int cols);
int sum_2d(int arr_2d[][COLS], int rows);

int main(void)
{
	// 배열의 복합 리터럴 사용

	// 2. 함수 호출시 배열의 복합 리터럴을 인수로 전달

	// 함수 호출시 1차원 배열을 인수로 전달
	int arr_1d[COLS] = { 1, 2, 3 };
	// sum_1d(arr_1d, ROWS)
	printf("%d\n", sum_1d(arr_1d, COLS));

	// 함수 호출시 1차원 배열의 복합 리터럴을 인수로 전달
	// sum_1d((int[COLS]) { 1, 2, 3 }, COLS)
	printf("%d\n", sum_1d((int[COLS]) { 1, 2, 3 }, COLS));

	// 함수 호출시 2차원 배열을 인수로 전달
	int arr_2d[ROWS][COLS] = { { 1, 2, 3 }, { 4, 5, 6} };
	// sum_2d(arr_2d, ROWS);
	printf("%d\n", sum_2d(arr_2d, ROWS));

	// 함수 호출시 2차원 배열의 복합 리터럴을 인수로 전달
	// sum_2d((int[ROWS][COLS]) { { 1, 2, 3 }, { 4, 5, 6 } }, ROWS);
	printf("%d\n", sum_2d((int[ROWS][COLS]) { { 1, 2, 3 }, { 4, 5, 6 } }, ROWS));

	return 0;
}

int sum_1d(int arr_1d[COLS], int cols)
{
	int sum = 0;

	for (int i = 0; i < cols; ++i) {
		sum += arr_1d[i];
	};

	return sum;
};

int sum_2d(int arr_2d[][COLS], int rows)
{
	int sum = 0;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < sizeof(arr_2d[0]) / sizeof(int); ++j) {
			sum += arr_2d[i][j];
		};
	};

	return sum;
};