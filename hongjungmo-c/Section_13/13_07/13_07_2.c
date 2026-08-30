// 13.7 기타 입출력 함수들
/*
	setvbuf 함수
	스트림 버퍼링 방식을 설정한다.
	int setvbuf( FILE *stream, char *buffer, int mode, size_t size );
	- stream : 버퍼링 방식을 설정할 스트림
	- buffer : 사용할 버퍼
	- mode : 버퍼링 모드
	- size : 버퍼의 크기
	- [return] int : 설정에 실패할 경우 non-zero 반환

	버퍼링 모드
	- _IOFBF ( Input/Output Full Buffering Mode )
	- _IOLBF ( Input/Output Line Buffering Mode )
	- _IONBF ( Input/Output None Buffering Mode )
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	FILE* fp;
	int ch;

	// 파일 스트림을 [읽기] 모드로 연다.
	fp = fopen("input.txt", "r");

	// 버퍼 초기화
	char buffer[32] = { '\0', };

	// 스트림 버퍼링 방식 설정 (Full Buffring Mode)
	setvbuf(fp, buffer, _IOFBF, sizeof(buffer)); 

	// 버퍼의 요소 확인
	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%hhd ", buffer[i]);
	printf("\n");

	// 파일 스트림에서 문자 하나를 읽는다.
	ch = fgetc(fp);

	// 버퍼의 요소 확인
	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%c ", buffer[i]);
	printf("\n");

	for (int i = 0; i < sizeof(buffer); ++i)
		printf("%hhd ", buffer[i]);
	printf("\n");

	fclose(fp);

	return 0;
}