// 14.4 구조체의 배열 연습문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_TITLE 40
#define MAX_AUTHOR 40
#define MAX_BOOKS 3

char* s_gets(char* str, int n)
{
	char* ret_val;
	char* find;

	// 표준 입력 스트림에서 길이 n만큼 문자열을 읽고 str에 저장한다.
	ret_val = fgets(str, n, stdin);
	if (ret_val) // ret_val != NULL
	{
		find = strchr(str, '\n');       // 문자열 str에서 개행 문자 '\n'의 위치 반환
		if (find)                       // '\n'가 존재할 경우 ( find != NULL )
			*find = '\0';               // '\n'를 '\0'로 치환 ( C언어의 문자열 형태로 변경 )
		else
			while (getchar() != '\n')   // 입력 버퍼를 비운다.
				continue;
	}

	return ret_val;
}

struct Book
{
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	float price;
};

int main(void)
{
	struct Book library[MAX_BOOKS] = { { "Empty", "Empty", 0.0f }, };

	int count = 0;

	while (1) 
	{
		printf("Input a book title or press [Enter] to stop.\n>>");
		// TO DO : input title
		// TO DO : break if the first character of the input title is '\0'
		// s_gets 함수의 NULL 반환에 대한 예외 처리
		if (s_gets(library[count].title, MAX_TITLE) == NULL) break;
		// input title의 첫 글자가 '\0'일 경우에 대한 예외 처리
		if (library[count].title[0] == '\0') break; // 문자열은 문자의 배열이므로 index로 접근

		printf("Input the author.\n>>");
		// TO DO : input author name
		s_gets(library[count].author, MAX_AUTHOR);

		printf("Input the price.\n>>");
		// TO DO : input price
		// TO DO : clear buffer
		int flag = scanf("%f", library[count].price);
		// 입력 버퍼 비우기
		while (getchar() != '\n') continue;

		count++;

		if (count == MAX_BOOKS)
		{
			printf("No more books.\n");
			break;
		};
	}

	printf("\n");

	if (count > 0)
	{
		printf("The list of books :\n");
		for (int index = 0; index < count; ++index) 
		{
			printf("\"%s\" writen by %s: $%.1f\n", library[index].title, library[index].author, library[index].price);
		}
	}
	else 
	{
		printf("No books to show.\n");
	}

	return 0;
}