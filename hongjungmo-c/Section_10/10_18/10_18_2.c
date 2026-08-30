// 10.18 복합 리터럴과 배열
/*
	복합 리터럴 (compound literal)
	배열, 구조체, 공동체 자료형의 이름 없는 객체
	( type ) { initializer-list };
*/

#include <stdio.h>
int main(void)
{
	// 배열의 복합 리터럴 사용

	// 1. 배열의 복합 리터럴을 배열 포인터로 사용

	// 1차원 배열의 복합 리터럴을 이용한 배열 포인터 선언
	int* ptr_arr_1d;
	ptr_arr_1d = (int[3]){ 1, 2, 3 };

	// 2차원 배열의 복합 리터럴을 이용한 배열 포인터 선언
	int (*ptr_arr_2d)[3];
	ptr_arr_2d = (int[2][3]){ { 1, 2, 3 }, { 4, 5, 6} };

	return 0;
}