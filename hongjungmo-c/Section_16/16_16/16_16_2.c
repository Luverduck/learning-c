// 16.16 memcpy()와 memmove()
/*
	memcpy 함수
	소스 메모리를 임시 버퍼에 저장하지 않고 바로 목적지 메모리에 복사한다.
	void *memcpy( void *dest, const void *src, size_t count );
	- dest : 복사할 소스를 저장할 목적지 메모리의 주소
	- src : 복사할 소스 메모리의 주소
	- count : 복사할 메모리의 [byte]
	- [return] void* : 목적지 메모리의 주소

	memmove 함수
	소스 메모리를 임시 버퍼에 저장한 후 임시 버퍼를 목적지 메모리에 복사한다.
	void *memmove( void *dest, const void *src, size_t count );
	- dest : 복사할 소스를 저장할 목적지 메모리의 주소
	- src : 복사할 소스 메모리의 주소
	- count : 복사할 메모리의 [byte]
	- [return] void* : 목적지 메모리의 주소
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // memcpy(), memmove()

#define LEN 6

void print_array(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	// src 배열 선언
	int src[6] = { 0, 1, 2, 3, 4, 5 };

	// memmove 함수 실행
	// i) 높은 메모리 주소에서 낮은 메모리 주소로 복사할 경우 => 정상 동작
	//memmove(src, &src[2], sizeof(int) * 4);
	// ii) 낮은 메모리 주소에서 높은 메모리 주소로 복사하는 경우 => 정상 동작
	memmove(&src[2], src, sizeof(int) * 4);

	// dest 배열 출력
	print_array(src, 6);

	return 0;
}