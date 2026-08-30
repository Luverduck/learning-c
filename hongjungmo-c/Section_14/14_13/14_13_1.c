// 14.13 구조체의 배열을 사용하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SLEN 101

// 책 구조체
struct Book
{
	char name[SLEN];
	char author[SLEN];
};

// TO DO : 책 정보를 출력하는 함수
void print_books(const struct Book[], int);

int main(void)
{
	// 구조체 배열 선언
	struct Book my_books[3];

	// 구조체 배열의 요소 초기화
	my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct Book){ "Hamlet", "Williams Shakesphere" };
	my_books[2] = (struct Book){ "The Odyssey", "Homer" };

	// 책 정보 출력
	print_books(my_books, 3);

	return 0;
}

// TO DO : 책 정보를 출력하는 함수
void print_books(const struct Book books[], int n)
{
	for (int i = 0; i < n; ++i) {
		printf("Book %d : \"%s\" written by \"%s\"\n", i + 1, books[i].name, books[i].author);
	}
};