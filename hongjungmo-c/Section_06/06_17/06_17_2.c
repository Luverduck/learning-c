// 6.17 for 루프를 배열과 함께 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
	int numbers[SIZE];
	int sum = 0;
	int i;

	printf("Enter %d numbers : \n", SIZE);

	for (i = 0; i < SIZE; ++i) {
		scanf("%d", &numbers[i]); // &( numbers[i] ) : 배열 인덱스 역참조 연산 후 주소 연산
	}

	for (i = 0; i < SIZE; ++i) {
		sum += numbers[i];
	}

	printf("Sum : %d\n", sum);

	// TO DO : average
	double average = sum / SIZE;
	printf("Average : %lf\n", average);

	return 0;
}