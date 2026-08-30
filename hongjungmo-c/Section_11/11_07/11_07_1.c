// 11.7 선택 정렬 문제 풀이
/*
	선택 정렬 (Selection Sort)
	총 n개의 데이터에 대하여
	i번째 자료를 (i+1)번째 자료부터 마지막 자료까지 순서대로 비교한 후
	가장 작은 자료를 찾아 i번째 값과 위치를 바꾼다.
*/

#include <stdio.h>

void swap(int* ptr_x, int* ptr_y);
void selectionSort(int* arr, int size);
void printArray(int* arr, int size);

int main(void)
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int size = sizeof(arr) / sizeof(arr[0]);

	// 정렬 전 배열 출력
	printArray(arr, size);

	// 정렬
	selectionSort(arr, size);

	// 정렬 후 배열 출력
	printArray(arr, size);

	return 0;
}

void swap(int* ptr_x, int* ptr_y)
{
	int temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(int* arr, int size)
{
	// 최소값의 index
	int idx_min;

	// i번째 요소에 대하여
	for (int i = 0; i < size - 1; ++i) 
	{
		// i번째 요소가 최소값이라 가정
		idx_min = i;

		// j번째 요소와 현재 최소값 요소의 값 비교
		for (int j = i + 1; j < size; ++j) 
		{
			// j번째 요소의 값이 현재 최소값 요소의 값보다 작으면
			if (arr[j] < arr[idx_min]) {
				idx_min = j; // index 교체
			}
		}

		// i번째 요소와 최소값 index의 요소를 교환
		swap(&arr[idx_min], &arr[i]);
	}
};

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	printf("\n");
};