// 10.16 다차원 배열을 함수에 전달하는 방법

#include <stdio.h>

// 기호적 상수 (symbolic constant)
#define ROWS 3
#define COLS 4

int main(void)
{
	// 2차원 배열
	int arr_2d[ROWS][COLS] = {
								{ 1, 2, 3, 4 },
								{ 5, 6, 7, 8 },
								{ 9, 0, 1, 2 }
												};

	// 2차원 배열 arr_2d의 (2, 3) 요소
	// 1) array subscripting operator []
	printf("%d\n", arr_2d[2][3]);

	// 2) pointer arithmetic
	int* ptr_arr_2d = &arr_2d[0][0];
	printf("%d\n", *( ptr_arr_2d + 3 + COLS * 2 ));
	// ptr_arr_2d + 3 을 통해 0열에서 3열로 이동
	// COLS * 2 을 통해 0행에서 2행으로 행 이동

	return 0;
}