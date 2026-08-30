// 9.11 헤더 파일을 만드는 방법

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void print_hello();
void print_hi();
void print_str(char* str);

int main(void)
{
	print_hello();
	print_hi();
	print_hello();
	print_hi();
	print_str("No one lives forever.");
	print_str("Valar morghulis.");

	return 0;
}

void print_hello() {
	printf("Hello!\n");
};

void print_hi() {
	printf("Hi!\n");
};

void print_str(char* str) {
	printf("%s\n", str);
};