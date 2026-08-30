// 11.8 문자열의 포인터를 정렬하기

#include <stdio.h>
#include <string.h> // strcmp()

void swap(char** ptr_x, char** ptr_y);
void selectionSort(char* arr[], int size);
void printArray(char* arr[], int size);

int main(void)
{
	// TO DO : 문자열 정렬
	// 문자열의 배열 (문자열의 주소가 저장된 배열)
	char* arr[] = { "Cherry", "AppleBee", "Pineapple", "Apple", "Orange" };
	int size = sizeof(arr) / sizeof(arr[0]);

	// 정렬 전 배열 출력
	printArray(arr, size);

	// 정렬 (문자열 순서 비교 후 문자열 주소를 정렬)
	selectionSort(arr, size);

	// 정렬 후 배열 출력
	printArray(arr, size);

	return 0;
}

void swap(char** ptr_x, char** ptr_y)
{
	char* temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(char* arr[], int size)
{
	// 순서가 빠른 문자열의 index
	int idx_min;

	// i번째 요소에 대하여
	for (int i = 0; i < size - 1; ++i) {

		// j번째 문자열이 가장 순서가 빠른 문자열이라 가정
		idx_min = i;

		// j번째 요소와 현재 가장 순서가 빠른 문자열 비교
		for (int j = i + 1; j < size; ++j) {

			// 앞의 문자열의 ASCII 코드가 작으면(순서가 더 빠르면)
			if (strcmp(arr[j], arr[idx_min]) < 0) {
				idx_min = j; // index 교체
			}
		}

		// i번째 요소와 가장 순서가 빠른 문자열을 교환
		swap(&arr[i], &arr[idx_min]);
	}
};

void printArray(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s ", arr[i]);
	};
	printf("\n");
};