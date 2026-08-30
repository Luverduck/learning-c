// 10.14 2차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 배열 포인터의 역참조
	// 역참조의 결과가 배열인 포인터

	// 2차원 배열 선언
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	// int (*)[3] : int형 3개를 요소로 갖는 배열을 가리키는 포인터 (배열의 포인터)
	int(*ptr_of_arr)[3] = NULL;  // 자료형 : int (*)[3]

	// 초기화
	ptr_of_arr = arr_2d; // 자료형 : int (*)[3]
	ptr_of_arr = &arr_2d[0];     // 자료형 : int (*)[3]
	ptr_of_arr = &arr_2d[1];     // 자료형 : int (*)[3]

	return 0;
}