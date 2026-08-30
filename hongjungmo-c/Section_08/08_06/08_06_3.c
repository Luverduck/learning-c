// 8.6 입력 확인하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 원형 (prototype)
long get_long();

int main()
{
	// TO DO : 1 초과, 100 미만의 정수만 입력
	long number;

	while (1) {
		printf("Please input an integer between 1 and 100.\n");
		
		number = get_long();
		
		if (number > 1 && number < 100) {
			printf("OK. Thank you.\n");
			break;
		}
		else {
			printf("Wrong input. Please try again.\n");
		}
	}

	printf("Your input %ld is between 1 and 100. Thank you.\n", number);

	return 0;
}

// 함수 정의 (definition)
long get_long()
{
	printf("Please input an integer and press enter.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1) {
		printf("Your input - ");

		while ((c = getchar()) != '\n') {
			putchar(c);
		}

		printf(" - is not an integer. Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you.\n", input);

	return input;
};