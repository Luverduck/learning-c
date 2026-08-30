// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 2차원 배열과 이중 포인터

	// 2차원 배열
	int arr_2d[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };

	// 포인터
	int* ptr;

	// 이중 포인터
	int** dptr;

	// 이중 포인터에 2차원 배열의 시작 메모리 주소 대입
	dptr = &ptr;
	*dptr = arr_2d[0];
	dptr = arr_2d; // int * != int *[3]이므로 Warning

	return 0;
}