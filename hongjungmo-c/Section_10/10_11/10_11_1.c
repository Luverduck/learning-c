// 10.11 배열 매개변수와 const

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_array(int arr[], int n);
void add_value(int arr[], int n, int val);
int sum(int arr[], int n);

int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);

	add_value(arr, 5, 100);

	print_array(arr, n);

	int s = sum(arr, n);
	printf("sum is %d\n", s);
	print_array(arr, n);

	return 0;
}

// 배열의 모든 요소를 출력하는 함수
// - 배열의 요소를 변화시키지 않으며 단순히 출력하는 기능을 가진다.
// - 함수 실행 중 배열의 요소나 길이를 변화시키지 않아야 한다.
// - 매개변수인 배열 arr과 배열의 길이 n을 const로 선언하여 값을 변경할 수 없도록 한다.
void print_array(const int arr[], const int n)
{
	for (int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
};

// 배열의 모든 요소에 정수를 더하는 함수
// - 배열의 요소를 변화시키는 기능을 가진다.
// - 함수 실행 중 배열의 요소를 변화시키지만 배열의 길이는 변화시키지 않아야 한다.
// - 매개변수 중 배열의 길이 n과 더하는 값 val을 const로 선언하여 값을 변경할 수 없도록 한다. 
void add_value(int arr[], const int n, const int val)
{
	for (int i = 0; i < n; ++i)
		arr[i] += val;
};

// 배열의 모든 요소 합을 구하는 함수
// - 배열의 요소를 변화시키지 않으며 단순히 배열 요소의 합계를 반환하는 기능을 가진다.
// - 함수 실행 중 배열의 요소나 길이를 변화시키지 않아야 한다.
// - 매개변수인 배열 arr과 배열의 길이 n을 const로 선언하여 값을 변경할 수 없도록 한다.
int sum(const int arr[], const int n)
{
	int total = 0;

	for (int i = 0; i < n; ++i)
		total += arr[i]; // arr[i]++;와 같은 구현상의 오류를 방지할 수 있다.

	return total;
};