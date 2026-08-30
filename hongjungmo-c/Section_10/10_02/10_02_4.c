// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 배열의 특징
	// 2. 배열의 요소는 연속된 메모리 공간에 할당된다.
	int arr[7];
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("&arr[%d] = %lld\n", i, (long long)&arr[i]);
	}

	return 0;
}