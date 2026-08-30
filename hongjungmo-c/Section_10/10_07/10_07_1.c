// 10.7 배열을 함수에게 전달해주는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

float func(double arr[]);

int main(void)
{
	// 배열 선언
	float arr[] = { 1.8, -0.2, 6.3, 13.9, 20.5 };

	// 배열의 크기 출력
	printf("address in main = %p\n", arr);
	printf("size in main = %zd\n", sizeof(arr));

	// 함수 호출
	func(arr);

	return 0;
}

float func(float arr_func[]) 
{
	// 함수 호출시 전달된 배열의 크기
	printf("address in func = %p\n", arr_func);
	printf("size in func = %zd\n", sizeof(arr_func));
};