// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 2차원 배열과 포인터

	// 2차원 배열
	int arr_2d[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };
	// 0번째 요소에 대하여
	// arr_2d = &arr_2d[0]                      ( int *[3] )
	// arr_2d = arr_2d[0] = &arr_2d[0][0]       ( int * )
	// 1번째 요소에 대하여
	// &arr_2d[1]                               ( int *[3] )
	// arr_2d[1] == &arr_2d[1][0]               ( int * )

	// ptr_arr_1에 arr[0][1]의 주소 저장
	int* ptr_arr_1 = &arr_2d[0][1];

	// ptr_arr_2에 1차원 배열 arr[1]의 주소 저장
	int* ptr_arr_2 = arr_2d[1];

	// ptr_arr_3에 2차원 배열 arr의 주소 저장 
	int* ptr_arr_3 = arr_2d; // int * != int (*)[3]이므로 Warnings

	return 0;
}