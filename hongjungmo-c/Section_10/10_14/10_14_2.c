// 10.14 2차원 배열과 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 배열 포인터의 역참조
	// 역참조의 결과가 배열의 시작 메모리 주소인 포인터
	
	// 2차원 배열 선언
	int arr_2d[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	
	// int *[2] : int형을 가리키는 포인터 2개를 요소로 갖는 배열 (포인터의 배열)
	int* arr_of_ptr[2] = NULL;   // 자료형 : int *[2]
	
	// 포인터 배열의 각 요소를 2차원 배열의 행 요소 주소로 초기화
	arr_of_ptr[0] = arr_2d[0];   // 자료형 : int *
	arr_of_ptr[1] = arr_2d[1];   // 자료형 : int *

	return 0;
}