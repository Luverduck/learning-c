// 10.9 포인터 연산 총 정리
/*
	배열 포인터 관련 연산자
	& : 피 연산자에 할당된 메모리의 시작 주소 반환
	* : 피 연산자가 가리키는 메모리에 저장된 값 반환(접근)
	[ ] : 피 연산자가 가리키는 메모리로부터 특정 인덱스 전/후의 메모리에 저장된 값 반환
*/

#include <stdio.h>

int main(void)
{
	int arr[] = { 100, 200, 300, 400, 500 };

	// 배열 포인터의 선언과 초기화 분리
	int* ptr_arr = NULL;
	ptr_arr = arr;

	// 배열 포인터의 선언과 동시에 초기화
	//int* ptr_arr = arr;

	// 배열 포인터의 주소 연산
	// arr = &arr[0]
	// ptr_arr + n = arr + n = &arr[0] + n : n번째 요소의 주소
	printf("%p %p\n", arr, ptr_arr);  // 0번째 요소(100)의 주소
	printf("%p %p\n", arr + 1, ptr_arr + 1);  // 1번째 요소(200)의 주소
	printf("%p %p\n", arr + 2, ptr_arr + 2);  // 2번째 요소(300)의 주소
	printf("%p %p\n", arr + 3, ptr_arr + 3);  // 3번째 요소(400)의 주소
	printf("%p %p\n", arr + 4, ptr_arr + 4);  // 4번째 요소(500)의 주소

	printf("\n");

	// 배열 포인터의 역참조 연산
	// *arr = *(&arr[0])
	// *(ptr + n) = *(arr + n) = *(&arr[0] + n) : n번째 요소의 값
	printf("%d %d\n", *arr, *ptr_arr);  // 100
	printf("%d %d\n", *(arr + 1), *(ptr_arr + 1));  // 200
	printf("%d %d\n", *(arr + 2), *(ptr_arr + 2));  // 300
	printf("%d %d\n", *(arr + 3), *(ptr_arr + 3));  // 400
	printf("%d %d\n", *(arr + 4), *(ptr_arr + 4));  // 500

	printf("\n");

	// 배열 포인터의 인덱스 연산과 역참조 연산
	// ptr_arr[n] = *(ptr + n) = *(arr + n) = *(&arr[0] + n) = *(&arr[n])
	printf("%d %d\n", ptr_arr[0], *ptr_arr);  // 100 100
	printf("%d %d\n", ptr_arr[1], *(ptr_arr + 1));  // 200 200
	printf("%d %d\n", ptr_arr[2], *(ptr_arr + 2));  // 300 300
	printf("%d %d\n", ptr_arr[3], *(ptr_arr + 3));  // 400 400
	printf("%d %d\n", ptr_arr[4], *(ptr_arr + 4));  // 500 500

	return 0;
}