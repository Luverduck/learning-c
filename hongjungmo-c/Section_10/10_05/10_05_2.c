// 10.5 2차원 배열과 메모리
/*
	2차원 배열과 메모리
	2차원 배열은 1차원 배열 여러 개가 연속적으로 연결된 구조이다.
*/

#include <stdio.h>
int main(void)
{
	int arr[2][3] = { {0, 1, 2}, {3, 4, 5} };

	// 2차원 배열의 행과 열
	// 행(row) = 2차원 배열의 메모리 크기 / 2차원 배열 내 1차원 배열의 메모리 크기
	size_t row = sizeof(arr) / sizeof(arr[0]);

	// 열(column) = 2차원 배열 내 1차원 배열의 메모리 크기 / 배열 요소 하나의 크기
	size_t col = sizeof(arr[0]) / sizeof(int);

	return 0;
}