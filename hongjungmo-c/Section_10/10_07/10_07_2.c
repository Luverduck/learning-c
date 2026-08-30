// 10.7 배열을 함수에게 전달해주는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(float arr[]);

int main(void)
{
	// 배열 선언
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	// 배열 정보 출력
	printf("size in main = %zd\n", sizeof(arr));
	for (int i = 0; i < sizeof(arr) / sizeof(float); ++i) {
		printf("%.1f ", arr[i]);
	}
	printf("\n");

	func(arr);

	return 0;
}

float func(float arr_func[]) 
{
	// 함수 호출시 전달된 배열 정보 출력
	printf("size in func = %zd\n", sizeof(arr_func));

	// 배열의 요소 출력
	for (int i = 0; i < sizeof(arr_func) / sizeof(float); ++i) {
		printf("%.1f ", arr_func[i]);
	}
	printf("\n");
};