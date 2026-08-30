// 10.4 포인터와 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 길이 4인 int형 배열 선언
	int arr[4];
	int num = sizeof(arr) / sizeof(int);

	// 배열의 요소 초기화
	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	// 배열의 0번째 요소 메모리를 가리키는 배열 포인터 선언
	int* ptr = arr; // ptr = arr = &arr[0] = 000000FE458FF6A5

	// 배열 포인터와 정수의 덧셈/뺄셈
	// ptr + n = arr + n = &arr[0] + n = &arr[n]

	printf("%p %p\n", ptr + 2, arr + 2);
	// 결과 : 000000FE458FF6AD 000000FE458FF6AD

	printf("%d %d\n", *(ptr + 2), *(arr + 2));
	// 결과 : 200 200

	return 0;
}