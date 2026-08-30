// 13.4 텍스트 파일의 입출력 함수들
/*
	fputs 함수
	스트림에 문자 하나를 [쓰기] 한다. (단, NULL 문자는 [쓰기]하지 않는다.)
	int fputs( const char *str, FILE *stream );
	- str : [쓰기] 할 문자열
	- stream : [쓰기] 할 파일의 스트림
	- [return] int : 실패할 경우 음수 또는 EOF(-1) 반환

	fgets 함수
	스트림에서 (n-1)개의 문자를 [읽기] 한 후 str이 가리키는 문자열에 저장한다.
	char *fgets( char *str, int n, FILE *stream );
	- str : [읽기] 한 문자열을 저장할 문자열
	- n : [읽기] 할 문자의 수 ( (n-1)개의 문자를 읽고 NULL 문자를 붙여 str에 저장)
	- stream : [읽기] 할 파일의 스트림
	- [return] char* : 읽은 문자열을 저장한 str을 반환 (실패할 경우 NULL 반환)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 31

int main(void)
{
	// 파일의 포인터
	FILE* fp;	// 파일의 포인터
	// 읽은 문자열을 저장할 문자 배열
	char words[MAX] = { '\0' };
	// 읽을 파일명 (실행 파일이 존재하는 위치를 기준으로 상대 경로)
	const char* filename = "record.txt";

	// "record.txt" 파일과의 스트림 생성
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// fgets / fputs에 의한 입출력
	// console의 입력 [읽기]한 후 'record.txt' 파일로 [쓰기]
	while ((fgets(words, MAX, stdin) != NULL) && (words[0] != '.')) {
		fputs(words, fp);
	}

	// 파일 위치 지정자를 지정한 스트림의 시작 지점으로 설정
	rewind(fp);

	// 'record.txt' 파일의 텍스트를 [읽기] 한 후 console로 [쓰기]
	while (fgets(words, "%s", fp) != NULL) {
		fputs(words, stdout);
	}

	// 파일 스트림 닫기
	if (fclose(fp) != 0) {
		fprintf(stderr, "Error closing file\n");
	}

	return 0;
}