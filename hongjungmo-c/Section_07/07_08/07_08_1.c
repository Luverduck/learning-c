// 7.8 단어 갯수 세기 예제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#define STOP '.'
int main(void)
{
	// TO DO : 입력한 문자열에서 글자의 갯수, 단어의 갯수, 줄의 수 구하기
	/*
		Enter text : 
		[입력] Hello world I am here.
		[출력] Characters : 17, Words : 5, Line = 1
	*/

	char ch;
	int n_chars = 0;
	int n_words = 0;
	int n_lines = 0;

	// line_flag에 의한 동작
	// - 줄 바꿈 문자 ‘\n’를 만날 때 다음 문자에서 줄 바꿈 처리를 위해 line_flag를 false로 바꾼다.
	bool line_flag = false;

	// word_flag에 의한 동작
	// 공백 문자를 만날 때 다음 문자에서 단어 수 증가를 위해 word_flag를 false로 바꾼다.
	bool word_flag = false;

	printf("Enter text :\n");

	while ((ch = getchar()) != STOP) {

		// ch가 공백 문자가 아니라면
		if (!isspace(ch)) { // isspace(ch) == false
			n_chars++; // 글자 수 +1
		}

		// ch가 공백 문자가 아니면서 줄 바꿈 처리가 완료되지 않은 경우 (line_flag == false)
		if (!isspace(ch) && !line_flag) { // ( isspace(ch) == false ) && ( line_flag == false )
			n_lines++;
			line_flag = true;
		}

		// ch가 줄 바꿈 문자 '\n'인 경우
		if (ch == '\n') {
			line_flag = false;
		}

		// ch가 공백 문자가 아니면서 단어 수 증가 처리가 완료되지 않은 경우 (word_flag == false)
		if (!isspace(ch) && !word_flag) { // ( isspace(ch) == false ) && ( word_flag == false )
			n_words++;
			word_flag = true;
		}

		// ch가 공백 문자인 경우
		if (isspace(ch)) {
			word_flag = false;
		}
	}

	printf("Characters = %d, Words = %d, Line = %d\n", n_chars, n_words, n_lines);

	return 0;
}