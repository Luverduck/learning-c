// 10.7 배열을 함수에게 전달해주는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float* ptr_arr, size_t size_arr);

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

	// 함수 호출
	func(arr, sizeof(arr) / sizeof(float));

	return 0;
}

float func(float* ptr_arr, size_t size_arr)
{
	// 함수 내에서 배열의 요소 출력
	for (int i = 0; i < size_arr; ++i) {
		printf("%p\t%.1f\n", &ptr_arr[i], ptr_arr[i]);
	}
	printf("\n");
};