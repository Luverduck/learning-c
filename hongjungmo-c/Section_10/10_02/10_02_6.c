// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 배열의 특징
	// 4. 배열의 요소를 초기화하지 않을 경우 쓰레기 값(garbage value)가 저장된다.
	int arr[5];
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	};

	return 0;
}