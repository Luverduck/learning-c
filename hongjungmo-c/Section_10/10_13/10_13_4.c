// 10.13 포인터의 배열과 2차원 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 문자열에 대한 포인터 배열 생성
	//char* arr_ptr[] = { "Aladin", "Jasmine", "Magic Carpet", "Genie" };

	//// 문자열 배열의 길이
	//const int arr_ptr_length = sizeof(arr_ptr) / sizeof(char*);

	//// 각각의 문자열에 할당된 메모리 시작 주소 출력
	//for (int i = 0; i < arr_ptr_length; ++i)
	//	printf("%s at %lu\n", arr_ptr[i], (unsigned)arr_ptr[i]); // 문자열 간의 메모리 간격이 일정하지 않다.

	//printf("\n");

	// 문자열에 대한 2차원 배열 생성
	char arr[][15] = {"Aladin", "Jasmine", "Magic Carpet", "Genie"};

	// 2차원 배열의 길이
	const int arr_length = sizeof(arr) / sizeof(arr[0]);

	// 각각의 문자열에 할당된 메모리 시작 주소 출력
	for (int i = 0; i < arr_length; ++i)
		printf("%s at %lu\n", arr[i], (unsigned)&arr[i]); // 문자열 간의 메모리 간격이 15로 일정하다.

	return 0;
}