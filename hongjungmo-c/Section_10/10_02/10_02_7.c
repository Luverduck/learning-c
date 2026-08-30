// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 배열의 특징
	// 5. 배열의 연속된 일부 요소만 부분적으로 초기화할 수 있다.
	int arr[5] = { 1,2 }; // 컴파일러가 나머지 요소들을 자동으로 0으로 초기화
	for (int i = 0; i < sizeof(arr) / sizeof(int); ++i) {
		printf("arr[%d] = %d\n", i, arr[i]);
	};

	return 0;
}