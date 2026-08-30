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
	char* temp = NULL;
	temp = *ptr_x;
	*ptr_x = *ptr_y;
	*ptr_y = temp;
};

void selectionSort(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		// 가장 빠른 문자열 가정
		char** str_min = &arr[i];
		for (int j = i + 1; j < size; ++j) {
			if (strcmp(arr[j], *str_min) < 0) {
				str_min = &arr[j];
			}
		}
		swap(&arr[i], str_min);
	}
};

void printArray(char* arr[], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s ", arr[i]);
	};
	printf("\n");
};