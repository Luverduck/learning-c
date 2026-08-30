// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	int arr[] = { 1, 2, 3 };

	// 배열의 길이
	printf("length of array = %zd\n", sizeof(arr) / sizeof(int));

	// 배열의 요소 출력
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

	return 0;
}