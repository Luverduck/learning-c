// 13.7 기타 입출력 함수들
/*
	ungetc 함수
	문자를 지정한 스트림의 시작 지점에 [쓰기] 한 후 스트림 위치를 시작 지점으로 초기화한다.
	int ungetc( int c, FILE *stream );
	- c : '쓰기' 할 문자열
	- stream : '쓰기' 할 스트림
	- [return] int : '쓰기' 한 문자
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;
	long cur;

	// 파일 스트림을 [읽기] 모드로 연다
	fp = fopen("input.txt", "r");
	
	// 초기 파일 스트림의 위치
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // 결과 : 0

	// 파일 스트림에서 문자 하나를 읽고 ch에 저장한 후 스트림의 위치를 이동시킨다.
	ch = fgetc(fp);	
	fputs(&ch, stdout);
	printf("\n");

	// 파일 스트림의 위치
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // 결과 : 1

	// ch의 값을 파일 스트림에 [쓰기] 한다.
	ungetc('b', fp);

	// 파일 스트림의 위치
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // 결과 : 0

	// 파일 스트림에서 문자 하나를 읽고 ch에 저장한 후 스트림의 위치를 이동시킨다.
	ch = fgetc(fp);
	fputs(&ch, stdout);
	printf("\n");

	// 파일 스트림의 위치
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // 결과 : 1

	// 파일 스트림에서 문자 하나를 읽고 ch에 저장한 후 스트림의 위치를 이동시킨다.
	ch = fgetc(fp);
	fputs(&ch, stdout);
	printf("\n");

	// 파일 스트림의 위치
	cur = ftell(fp);
	printf("ftell = %ld\n", cur); // 결과 : 2

	fclose(fp);

	return 0;
}