// 14.26 함수 포인터의 배열 연습문제

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

void update_string(char*, int(*)(int));
void ToUpper(char*);
void ToLower(char*);
void Transpose(char*);

int main(void)
{
	char options[] = { 'u', 'l', 't'};
	int n = sizeof(options) / sizeof(char);

	// 함수 포인터의 배열
	typedef void (*FUNC_TYPE)(char*);
	FUNC_TYPE operations[] = { ToUpper, ToLower, Transpose };

	printf("Enter a string\n>> ");

	char input[100];

	while (scanf("%[^\n]%*c", input) != 1)
		printf("Please try again.\n>> ");

	while (true)
	{
		printf("Choose an options:\n");
		printf("u) to upper\n");
		printf("l) to lower\n");
		printf("t) transpose\n");

		// 옵션 선택
		char option_choose;
		// "%c%*[^\n]%*c" 해석
		// 1) %c : 문자 하나를 읽고 option_choice에 저장
		// 2) %*[^\n] : \n을 만나기 전까지의 문자들을 읽고 버린다.
		// 3) %*c : 문자 하나를 읽고 버린다.
		while (scanf("%c%*[^\n]%*c", &option_choose) != 1)
			printf("Please try again.\n>> ");

		// 루프 종료를 위한 flag
		bool found = false;

		// 선택한 옵션에 따라 대문자/소문자로 변경
		// options에서 선택한 옵션의 index를 찾아 operations에서 해당 index의 함수 실행
		for (int i = 0; i < n; ++i)
		{
			if (options[i] == option_choose) {
				(*(operations[i]))(input); // 함수 실행
				found = true; // 루프 종료를 위해 true로 변경
				break;
			}
		}

		if (found)
			break;
		else
			printf("Wrong Input, try again\n");
	}

	// 문자열 출력
	printf("%s\n", input);

	return 0;
}

// 문자열 전체를 대문자/소문자로 변경하는 함수
void update_string(char* str, int(*ptr_func)(int))
{
	while (*str != '\0')
	{
		*str = (*ptr_func)(*str);
		str++;
	}
};

// 문자열 전체를 대문자로 변경하는 함수
void ToUpper(char* str)
{
	update_string(str, toupper);
};

// 문자열 전체를 소문자로 변경하는 함수
void ToLower(char* str)
{
	update_string(str, tolower);
};

// 문자열 전체에서 대문자는 소문자로, 소문자는 대문자로 변환
void Transpose(char* str)
{
	while (*str != '\0') {
		if (*str <= 'Z')
			update_string(str, tolower);
		else
			update_string(str, toupper);
		str++;
	}
};