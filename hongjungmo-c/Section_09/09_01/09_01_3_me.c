// 9.1 함수가 필요할 때

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // strlen()

#define WIDTH 40
#define NAME "Hyun-Yong Eom"
#define ADDRESS "Seoul, Korea"

void print_var(int n_star);
void print_blank(char name[]);

int main(void)
{
	print_var(WIDTH);

	print_blank(NAME);
	printf("%s\n", NAME);

	print_blank(NAME);
	printf("%s\n", ADDRESS);

	print_var(WIDTH);

	return 0;
}

void print_var(int n_star) {
	for (int i = 0; i < n_star; ++i) {
		printf("*");
	}
	printf("\n");
};

void print_blank(char name[]) {
	for (int i = 0; i < (WIDTH - strlen(name)) / 2; ++i) {
		printf(" ");
	};
};