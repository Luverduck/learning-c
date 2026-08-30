// 10.4 포인터와 배열

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 길이 4인 int형 배열 선언
	int arr[4];
	int num = sizeof(arr) / sizeof(int);

	// 배열의 요소를 100, 200, 300, 400으로 초기화
	for (int i = 0; i < num; ++i) {
		arr[i] = (i + 1) * 100;
	};

	// 배열의 1번째 요소 메모리를 가리키는 배열 포인터 선언
	int* ptr = arr + 1; // ptr = arr + 1 = &arr[0] + 1 = &arr[1] = 000000FE458FF6A9

	// 배열 포인터와 정수의 덧셈/뺄셈
	// ptr + n = arr + n = &arr[1] + n = &arr[n + 1]

	printf("%p %p\n", ptr + 1, arr + 2);
	// 결과 : 000000FE458FF6A9 000000FE458FF6A9

	printf("%d %d\n", *(ptr + 1), *(arr + 2));
	// 결과 : 300 300

	return 0;
}