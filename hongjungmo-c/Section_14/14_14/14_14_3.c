// 14.14 구조체 파일 입출력 연습 문제

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
struct Book* read_books(const char*, int*);
void read_book2(const char*, struct Book**, int*);

int main(void)
{
	// 구조체 배열의 길이
	int n = 2;

	// 구조체 배열의 동적 할당 및 멤버 초기화
	struct Book* my_books = (struct Book*)malloc(sizeof(struct Book) * n);
	if (my_books == NULL) { // if ( !my_books )
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

	// 사용자 입력을 기다린다.
	printf("\nPress any key to read data from a file.\n");
	int temp;
	temp = _getch();

	// 파일을 읽기
	my_books = read_books("books.txt", &n);
	//read_book2("books.txt", &my_books, &n); // 이중 포인터를 사용하는 경우

	// 파일 출력
	print_books(my_books, n);

	// 동적 할당 메모리 해제
	free(my_books);
	n = 0;

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

	// [START] TO DO : 바이너리 형태로 '쓰기'
	// 구조체 배열의 갯수를 파일에 '쓰기' 한다.
	fwrite(&n, sizeof(n), 1, ptr_file);

	// 구조체 배열의 요소를 파일에 '쓰기' 한다.
	fwrite(ptr_books, sizeof(struct Book), n, ptr_file);
	// [END] TO DO

	// 파일 스트림을 닫는다.
	fclose(ptr_file);
};

// 파일을 '읽기' 후 구조체 정보 갱신
struct Book* read_books(const char* filename, int* ptr_n)
{
	// 파일 스트림을 연다.
	FILE* ptr_file = fopen(filename, "r");
	if (ptr_file == NULL)
	{
		fputs("Can't open file.\n", stderr);
		exit(EXIT_FAILURE);
	}

	// [START] TO DO : 바이너리 형태로 '읽기'
	// 파일에서 구조체 배열의 길이를 '읽기' 한다.
	fread(ptr_n, sizeof(*ptr_n), 1, ptr_file);

	// 구조체 배열을 동적 할당한다.
	struct Book* books = (struct Book*)malloc(sizeof(struct Book) * (*ptr_n));
	if (books == NULL)
	{
		printf("malloc() failed.\n");
		exit(EXIT_FAILURE);
	}

	// 파일에서 구조체 배열의 요소를 '읽기' 한다.
	fread(books, sizeof(struct Book), *ptr_n, ptr_file);
	// [END] TO DO

	// 파일 스트림을 닫는다.
	fclose(ptr_file);

	// 구조체 배열을 반환한다.
	return books;
};

// 파일을 '읽기' 후 구조체 정보 갱신 - 이중 포인터를 사용하는 경우
void read_book2(const char* filename, struct Book** dptr_books, int* ptr_n)
{
	// 파일 스트림을 연다.
	FILE* ptr_file = fopen(filename, "r");
	if (ptr_file == NULL)
	{
		fputs("Can't open file.\n", stderr);
		exit(EXIT_FAILURE);
	}

	// 파일에서 구조체 배열의 길이를 '읽기' 한다.
	int flag = fscanf(ptr_file, "%d%*c", ptr_n);
	if (flag != 1)
	{
		printf("File read failed\n");
		exit(EXIT_FAILURE);
	}

	// 구조체 배열을 동적 할당한다.
	struct Book* books = (struct Book*)malloc(sizeof(struct Book) * (*ptr_n));
	if (books == NULL)
	{
		printf("malloc() failed.\n");
		exit(EXIT_FAILURE);
	}

	// 파일에서 구조체 배열의 요소를 '읽기' 한다.
	for (int i = 0; i < *ptr_n; ++i)
	{
		flag = fscanf(ptr_file, "%[^\n]%*c%[^\n]%*c", books[i].name, books[i].author);
		if (flag != 2)
		{
			printf("File read failed\n");
			exit(EXIT_FAILURE);
		}
	}

	// 파일 스트림을 닫는다.
	fclose(ptr_file);

	// 구조체 배열의 주소를 저장한다.
	*dptr_books = books;
};