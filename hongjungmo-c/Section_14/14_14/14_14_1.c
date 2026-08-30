// 14.14 구조체 파일 입출력 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SLEN 101

struct Book
{
	char name[SLEN];
	char author[SLEN];
};

void print_books(const struct Book*, int);
void write_books(const char*, const struct Book*, int);

int main(void)
{
	// 구조체 배열의 길이
	int n = 2;

	// 구조체 배열의 동적 할당 및 멤버 초기화
	struct Book* my_books = (struct Book*)malloc(sizeof(struct Book) * n);
	if (my_books == NULL) // if ( !my_books )
	{		
		printf("malloc() failed");
		exit(EXIT_FAILURE);
	}
	my_books[0] = (struct Book){ "The Great Gatsby", "F. Scott Fitzgerald" };
	my_books[1] = (struct Book){ "Hamlet", "William Shakespeare" };

	// 구조체 배열의 요소 출력
	print_books(my_books, n);

	// 파일에 쓰기
	printf("\nWriting to a file.\n");
	write_books("books.txt", my_books, n);

	// 동적 할당 메모리 해제
	free(my_books);
	n = 0;

	printf("Done.\n");

	return 0;
}

// 구조체 정보 출력
void print_books(const struct Book* ptr_books, int n)
{
	for (int i = 0; i < n; ++i) 
	{
		printf("Book %d : \"%s\" written by \"%s\"\n", i, ptr_books[i].name, ptr_books[i].author);
	}
};

// 구조체 정보를 파일에 '쓰기'
void write_books(const char* filename, const struct Book* ptr_books, int n)
{
	// 파일 스트림을 연다.
	FILE* ptr_file = fopen(filename, "w");
	if (ptr_file == NULL) 
	{
		fprintf(stderr, "Can't open %s file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// 구조체 배열의 갯수를 파일에 '쓰기' 한다.
	fprintf(ptr_file, "%d\n", n);

	// 구조체 배열의 요소를 파일에 '쓰기' 한다.
	for (int i = 0; i < n; ++i) 
	{
		fprintf(ptr_file, "%s\n%s\n", ptr_books[i].name, ptr_books[i].author);
	}

	// 파일 스트림을 닫는다.
	fclose(ptr_file);
};