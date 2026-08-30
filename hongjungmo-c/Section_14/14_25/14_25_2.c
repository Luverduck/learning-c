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

struct Kid
{
	char name[100];
	int height;
};

// TO DO : 두 요소의 관계를 반환하는 함수 구현
int compare(const void* first, const void* second);

int main(void)
{
	// 구조체의 배열 선언
	struct Kid my_friends[] = {
		"Jack Jack", 40, "Genie", 300, "Aladin", 170, "Piona", 150
	};

	// 배열의 길이
	const int n = sizeof(my_friends) / sizeof(struct Kid);

	// 퀵 정렬
	qsort(my_friends, n, sizeof(struct Kid), compare);

	// 정렬 후 배열의 요소 출력
	for (int i = 0; i < n; ++i)
		printf("%s     \t%d\n", my_friends[i].name, my_friends[i].height);

	return 0;
}

// TO DO : 두 요소의 관계를 반환하는 함수 구현
int compare(const void* first, const void* second)
{
	// void* 를 sturct Kid*로 형 변환
	if (((struct Kid*)first)->height > ((struct Kid*)second)->height)
		return 1;
	else if (((struct Kid*)first)->height < ((struct Kid*)second)->height)
		return -1;
	else
		return 0;
};