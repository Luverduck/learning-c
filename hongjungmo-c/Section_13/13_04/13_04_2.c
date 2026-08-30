// 13.4 텍스트 파일의 입출력 함수들
/*
	fprintf 함수
	스트림에 지정한 형식으로 문자열을 [쓰기] 한다.
	int fprintf( FILE *stream, const char *format, ... );
	- stream : [쓰기] 할 파일의 스트림
	- format : [쓰기] 할 문자열 형식
	- ... : 문자열 형식에서 형식 지정자의 인수
	- [return] int : [쓰기] 한 문자 [byte]의 수

	fscanf 함수
	스트림에서 지정한 형식으로 문자열를 [읽기] 한 후 형식 지정자에 대응하는 인수에 저장한다.
	int fscanf( FILE *stream, const char *format, ... );
	- stream : [읽기] 할 파일의 스트림
	- format : [읽기] 할 문자열 형식
	- ... : 문자열 형식에서 형식 지정자의 인수
	- [return] int : [읽기] 한 문자열 중 인수에 값을 저장한 수
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

	// fscanf / fprintf에 의한 입출력
	// console의 입력 [읽기]한 후 'record.txt' 파일로 [쓰기]
	while ((fscanf(stdin, "%30s", words) == 1) && (words[0] != '.')) {
		fprintf(fp, "%s", words);
	}

	// 파일 위치 지정자를 지정한 스트림의 시작 지점으로 설정
	rewind(fp);

	// 'record.txt' 파일의 텍스트를 [읽기] 한 후 console로 [쓰기]
	while (fscanf(fp, "%s", words) != EOF) {
		fprintf(stdout, "%s\n", words);
	}

	// 파일 스트림 닫기
	if (fclose(fp) != 0) {
		fprintf(stderr, "Error closing file\n");
	}

	return 0;
}