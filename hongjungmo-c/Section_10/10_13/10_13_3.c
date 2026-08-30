// 10.13 포인터의 배열과 2차원 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 배열 선언
	int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };

	// 2차원 배열과 포인터 배열로 구현한 2차원 배열
	int* arr_ptr[2];
	arr_ptr[0] = arr[0];
	arr_ptr[1] = arr[1];


	// 포인터 배열로 구현한 2차원 배열의 인덱스 연산
	// arr_ptr[i][j] = *( arr_ptr[i] + j ) = *( *(arr_ptr + i) + j ) = *( arr_ptr + i )[j];
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%d(==%d, %d)\n", arr_ptr[i][j], *(arr_ptr[i] + j), *(*(arr_ptr + i) + j));
		}
	}

	printf("%p\n", arr_ptr);
	printf("%p\n", &arr_ptr[0]);
	printf("%p\n", arr_ptr[0]);
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr[0][0]);

	return 0;
}