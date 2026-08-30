// 10.16 다차원 배열을 함수에 전달하는 방법

#include <stdio.h>

// 기호적 상수 (symbolic constant)
#define ROWS 3
#define COLS 4

// 2차원 배열의 주소와 행, 열의 값을 인수로 하는 경우
int sum_2d_3(int* arr_2d, int row, int col);
// int sum_2d_3(int*, int, int);

int main(void)
{
	// 2차원 배열
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2차원 배열 모든 요소의 합
	printf("%d\n", sum_2d_3(arr_2d, ROWS, COLS));

	return 0;
}

// 함수 호출시 2차원 배열의 주소와 행, 열의 값을 인수로 전달
// - 함수 호출시 2차원 배열의 주소와 행, 열의 값을 전달한다.
int sum_2d_3(int* arr_2d, int row, int col)
{
	int sum = 0;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			sum += *(arr_2d + col * i + j); // arr_2d[ col * i + j ];
		};
	};

	return sum;
};