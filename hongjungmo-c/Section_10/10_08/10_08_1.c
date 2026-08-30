// 10.8 두 개의 포인터로 배열을 함수에게 전달해주는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float* ptr_arr_start, float* ptr_arr_end);

int main(void)
{
	// 배열 선언
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	float* ptr_arr = arr;

	// 배열의 요소 출력
	for (int i = 0; i < sizeof(arr) / sizeof(float); ++i) {
		printf("%p\t%.1f\n", &arr[i], ptr_arr[i]);
	}
	printf("\n");

	// 함수 호출시 
	// 0번째 요소의 메모리 시작 주소와 마지막 요소의 메모리 시작 주소를 인자로 전달
	func(arr, arr + 5);

	return 0;
}

float func(float* ptr_arr_start, float* ptr_arr_end)
{
	// 함수 내에서 배열의 요소 출력
	for (float* ptr = ptr_arr_start; ptr < ptr_arr_end; ++ptr) {
		// 포인터와 포인터의 뺄셈 연산은 각각의 포인터가 가리키는 데이터들 사이의 간격(인덱스)을 의미한다.
		printf("%p\t%.1f\n", &ptr_arr_start[ptr - ptr_arr_start], ptr_arr_start[ptr - ptr_arr_start]);
	}

	printf("\n");
};