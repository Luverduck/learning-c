// 10.14 2차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 2차원 배열과 포인터의 관계

	// 2차원 배열 선언
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	// 메모리 주소 관계
	// arr_2d == &arr_2d[0] == *arr_2d == arr_2d[0] == &arr_2d[0][0]
	// 1) arr_2d = &arr_2d[0];                  // 자료형 : int (*)[3]
	// 2) *arr_2d = arr_2d[0] = &arr_2d[0][0];  // 자료형 : int *
	printf("%p %p\n", arr_2d, &arr_2d[0]);
	printf("%p %p %p\n", *arr_2d, arr_2d[0], &arr_2d[0][0]);

	// &arr_2d[1] == arr_2d[1] == &arr_2d[1][0]
	printf("%p\n", &arr_2d[1]);
	printf("%p %p\n", arr_2d[1], &arr_2d[1][0]);

	// 역참조 관계
	// arr_2d[0][0] == **arr_2d                    // (0, 0) 번째 요소
	printf("%d %d\n", arr_2d[0][0], **arr_2d);

	// arr_2d[i][j] == *(*(arr_2d + i) + j)        // (i, j) 번째 요소
	printf("%d %d\n", arr_2d[1][2], *(*(arr_2d + 1) + 2));

	return 0;
}