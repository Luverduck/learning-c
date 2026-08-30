// 6.17 for 루프를 배열과 함께 사용
/*
	TO DO : 5개의 숫자를 입력받은 후 그 합계를 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 5

int main(void)
{
	int my_arr[SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; ++i) {
		printf("Enter Number (count : %d) : ", i + 1);
		scanf("%d", &my_arr[i]);
		printf("\n");
	}

	for (int i = 0; i < SIZE; ++i) {
		sum += my_arr[i];
	}

	printf("Sum : %d", sum);

	return 0;
}