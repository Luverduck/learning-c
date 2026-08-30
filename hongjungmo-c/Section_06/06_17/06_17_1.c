// 6.17 for 루프를 배열과 함께 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
	int my_arr[SIZE];

	// prepare for array data
	for (int i = 0; i < SIZE; ++i) {
		my_arr[i] = i;
	}

	// print array data
	for (int i = 0; i < SIZE; ++i) {
		printf("%d ", my_arr[i]);
	}

	// TO DO : try debugger

	return 0;
}