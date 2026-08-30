// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 배열의 특징
	// 1. 컴파일 타임에서 인덱스 초과 여부를 검사하지 않는다.
	int arr[3];
	printf("%d\n", arr[4]);

	return 0;
}