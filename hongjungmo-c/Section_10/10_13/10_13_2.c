// 10.13 포인터의 배열과 2차원 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 배열 선언
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 2차원 배열과 포인터로 구현한 1차원 배열
	int* ptr_arr0 = arr[0];
	int* ptr_arr1 = arr[1];

	// 포인터로 구현한 1차원 배열의 인덱스 연산
	// ptr_arr0[i] = *(ptr_arr0 + i) = *(&ptr_arr0[0] + i)
	for (int i = 0; i < 3; ++i) {
		printf("%d (= %d, %d)\n", ptr_arr0[i], *(ptr_arr0 + i), *(&ptr_arr0[0] + i));
	}

	printf("\n");

	for (int i = 0; i < 3; ++i) {
		printf("%d (= %d, %d)\n", ptr_arr1[i], *(ptr_arr1 + i), *(&ptr_arr1[0] + i));
	}

	return 0;
}