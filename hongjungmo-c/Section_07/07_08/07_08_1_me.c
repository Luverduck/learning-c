// 7.8 단어 갯수 세기 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// TO DO : 입력한 문자열에서 글자의 갯수, 단어의 갯수, 줄의 수 구하기
	/*
		Enter text :
		[입력] Hello world I am here.
		[출력] Characters = 17, Words = 5, Line = 1
	*/

	char ch;

	int count_character = 0, count_word = 1, count_line = 1;

	printf("Enter text : \n");

	while ((ch = getchar()) != '.') {
		if (ch == ' ') count_word++;
		else if (ch == '\n') count_line++;
		else count_character++;
	}

	printf("Characters = %d, Words = %d, Line = %d\n", count_character, count_word, count_line);

	return 0;
}