// 9.1 함수가 필요할 때

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // strlen()

#define WIDTH 20
#define NAME "Hyun-Yong Eom"
#define ADDRESS "Seoul, Korea"

void print_var(int n_star);

int main(void)
{
	print_var(20);

	printf("   %s\n", NAME);
	printf("   %s\n", ADDRESS);

	print_var(20);

	return 0;
}

void print_var(int n_star) {
	printf("********************\n");

	for (int i = 0; i < n_star; ++i) {
		printf("*");
	}
	printf("\n");
};