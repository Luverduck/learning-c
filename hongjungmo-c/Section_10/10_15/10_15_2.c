// 10.15 포인터의 호환성
/*
	포인터의 호환성 관련 내용들은
	문법적으로 허용하는 내용들이지만 권장하지 않는다.
*/

#include <stdio.h>
int main(void)
{
	// 다차원 배열의 요소 접근

	// 2차원 배열
	int arr_2d[2][3] = { { 1, 2, 3}, { 4, 5, 6 } };

	// 포인터에 2차원 배열의 메모리 시작 주소 저장
	int* ptr_arr = arr_2d; // int * != int (*)[3] 이므로 Warning

	// 다차원 배열의 요소 접근
	for (int i = 0; i < sizeof(arr_2d) / sizeof(int); ++i)
		printf("%d ", *(ptr_arr + i));

	return 0;
}