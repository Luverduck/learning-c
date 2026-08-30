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

	// 배열 포인터의 인덱스 연산
	// ptr[n] = *(ptr + n)

	// 배열의 0번째 요소 메모리를 가리키는 배열 포인터 선언
	int* ptr_0 = arr; // ptr = arr = &arr[0] = 000000FE458FF6A5

	// 현재 요소로부터 3번째 다음 요소의 값에 접근
	printf("%p %d\n", &ptr_0[3], ptr_0[3]); // 결과 : 000000FE458FF6B1 400

	// 배열의 1번째 요소 메모리를 가리키는 배열 포인터 선언
	int* ptr_1 = arr + 1; // ptr = arr + 1 = &arr[0] + 1 = &arr[1] = 000000FE458FF6A9

	// 현재 요소로부터 2번째 다음 요소의 값에 접근
	printf("%p %d\n", &ptr_1[2], ptr_1[2]); // 결과 : 000000FE458FF6B1 400

	return 0;
}