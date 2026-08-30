// 9.1 함수가 필요할 때

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> // strlen()

#define WIDTH 40
#define NAME "Hyun-Yong Eom"
#define ADDRESS "Seoul, Korea"

// 함수 원형 (prototype)
void print_multiple_char(char ch, int n, bool new_line);
void print_centered_str(char str[]);


int main(void)
{
	print_multiple_char('*', WIDTH, true);

	print_centered_str(NAME);

	print_centered_str(ADDRESS);

	print_multiple_char('*', WIDTH, false);

	return 0;
}

// 함수 정의 (definition)
void print_multiple_char(char ch, int n, bool new_line) {
	for (int i = 0; i < n; ++i) {
		printf("%c", ch);
	}
	if (new_line) {
		printf("\n");
	}
};

void print_centered_str(char str[]) {
	int n_blank;
	n_blank = (WIDTH - strlen(str)) / 2;
	print_multiple_char(' ', n_blank, false);
	printf("%s\n", str);
};