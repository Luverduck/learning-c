// 13.2 텍스트 파일 입출력 예제
/*
	FILE
	파일을 처리하기 위한 구조체
	typedef struct _iobuf
	{
		char* _ptr;
		int _cnt;
		char* _base;
		int _flag;
		int _file;
		int _charbuf;
		int _bufsiz;
		char* _tmpfname;
	} FILE;
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	// 텍스트 파일(.txt)의 문자들을 읽고 화면에 출력하는 프로그램

	int ch; // 파일의 글자 수
	FILE* file_read; // 읽기 할 파일의 메모리 주소

	// TO DO: file pointer to write
	FILE* file_write; // 쓰기 할 파일의 메모리 주소

	unsigned long count = 0; // 글자 수

	// 명령줄 인수가 비어있을 경우
	if (argc < 2)
	{
		printf("Usage : %s filename\n", argv[0]); // Usage : [filepath] [filename]
		exit(EXIT_FAILURE);
	}

	if ((file_read = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]); // Can't open [filename]
		exit(EXIT_FAILURE);
	}

	// TO DO: open file to write with "w" mode string
	if ((file_write = fopen(argv[2], "w")) == NULL)
	{
		printf("Can't open %s\n", argv[1]); // Can't open [filename]
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(file_read)) != EOF)
	{
		fputc(ch, stdout);
		
		// TO DO: use fputc() to write a file stream!
		fputc(ch, file_write);

		count++;
	}

	// 파일 스트림을 닫는다.
	fclose(file_read);
	fclose(file_write);

	printf("FILE %s has %lu characters\n", argv[1], count);
	printf("Copied to  %s\n", argv[2]);

	return 0;
}