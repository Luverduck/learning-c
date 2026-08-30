// 14.25 qsort 함수 포인터 연습 문제
/*
	qsort 함수
	void qsort(	void* arr, size_t lenth, size_t size, int (*compare)(const void*, const void*) );
	- arr : 정렬할 배열의 주소
	- lenth : 정렬할 배열의 길이
	- size : 정렬할 배열 요소의 크기[Byte]
	- compare : 두 요소를 비교하여 관계를 지정하는 값을 반환하는 함수 포인터
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // qsort()

// 두 요소의 관계를 반환하는 함수
int compare(const void* first, const void* second)
{
	// void* 를 int*로 형 변환 후 역참조
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	// 배열 선언
	int arr[] = { 8, 2, 5, 3, 6, 11 };
	// 배열의 길이
	int n = sizeof(arr) / sizeof(arr[0]);

	// 퀵 정렬
	qsort(arr, n, sizeof(int), &compare);

	// 정렬 후 배열의 요소 출력
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);

	return 0;
}