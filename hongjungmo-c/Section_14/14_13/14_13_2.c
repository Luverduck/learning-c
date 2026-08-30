// 14.13 구조체의 배열을 사용하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SLEN 101

// 책 구조체
struct Book
{
	char name[SLEN];
	char author[SLEN];
};

//  책 정보를 출력하는 함수
void print_books(const struct Book*, int);

int main(void)
{
	// TO DO : 동적 할당 배열을 사용하는 경우
	
	// 구조체 배열 선언
	struct Book* ptr_my_books = (struct Book*)malloc(sizeof(struct Book) * 3);
	if (ptr_my_books == NULL) {
		printf("malloc() failed");
		exit(EXIT_FAILURE);
	};

	// 구조체 배열의 요소 초기화
	ptr_my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	ptr_my_books[1] = (struct Book){ "Hamlet", "Williams Shakesphere" };
	ptr_my_books[2] = (struct Book){ "The Odyssey", "Homer" };
	
	// 책 정보 출력
	print_books(ptr_my_books, 3);

	// 동적 할당 메모리 해제
	free(ptr_my_books);

	return 0;
}

// 책 정보를 출력하는 함수
void print_books(const struct Book* books, int n)
{
	for (int i = 0; i < n; ++i) {
		printf("Book %d : \"%s\" written by \"%s\"\n", i + 1, books[i].name, books[i].author);
	}
};