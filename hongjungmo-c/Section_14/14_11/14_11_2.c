// 14.11 신축성 있는 배열 멤버
/*
	신축성 있는 배열 멤버 (Flexible Array Member)
	구조체의 마지막 멤버로 선언된 길이가 정해지지 않은 배열
	해당 배열 멤버는 동적 할당을 통해 길이를 자유롭게 조정할 수 있다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct Flexible
	{
		size_t count;
		double average;
		double* values; // pointer
	};

	// 동적 할당 메모리 갯수
	const size_t n = 3;

	// 구조체 변수 선언
	struct Flexible ptr_flexible;

	// 구조체 변수의 멤버 동적 할당
	ptr_flexible.values = (double*)malloc(sizeof(double) * n);

	return 0;
}