// 8.6 입력 확인하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("Please input an integer and press enter\n");

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

	return 0;
}