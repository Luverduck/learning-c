// 13.4 텍스트 파일의 입출력 함수들
/*
	fopen 함수
	파일과의 스트림을 [열기] 한다.
	FILE *fopen(const char *filename, const char *mode);
	- filename : 스트림 [열기] 할 파일의 경로
	- mode : 스트림 유형
		“r”	 : 텍스트 파일을 [읽기] 모드로 연다. 텍스트 파일이 존재하지 않으면 NULL을 반환한다.
		“w”	 : 텍스트 파일을 [쓰기] 모드로 연다. 텍스트 파일이 존재하지 않으면 새로 생성하며, 이미 존재하면 [덮어쓰기] 한다.
		“a”	 : 텍스트 파일을 [추가] 모드로 연다. 텍스트 파일이 존재하지 않으면 새로 생성한다.
		“r+” : 텍스트 파일을 [읽기]와 [쓰기] 모드로 연다. 텍스트 파일이 존재하지 않으면 NULL을 반환한다.
		“w+” : 텍스트 파일을 [읽기]와 [쓰기] 모드로 연다. 텍스트 파일이 존재하지 않으면 새로 생성하며, 존재하면 [덮어쓰기] 한다.
		“a+” : 텍스트 파일을 [읽기]와 [추가] 모드로 연다. 텍스트 파일이 존재하지 않으면 새로 생성한다.
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
	const char* filename = "record";

	// fopen 함수
	// i) r+ 모드
	// - 텍스트 파일을 [읽기]와 [쓰기] 모드로 연다.
	// - 텍스트 파일이 존재하지 않으면 NULL을 반환한다.
	//if ((fp = fopen(filename, "r+")) == NULL)
	//{
	//	fprintf(stderr, "Can't open \"%s\" file.\n", filename);
	//	exit(EXIT_FAILURE);
	//}

	// ii) w+ 모드
	// - 텍스트 파일을 [읽기]와 [쓰기] 모드로 연다.
	// - 텍스트 파일이 존재하지 않으면 새로 생성하며, 존재하면 [덮어쓰기] 한다.
	if ((fp = fopen(filename, "w+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	// iii) a+ 모드
	// - 텍스트 파일을 [읽기]와 [추가] 모드로 연다. 
	// - 텍스트 파일이 존재하지 않으면 새로 생성한다.
	if ((fp = fopen(filename, "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"%s\" file.\n", filename);
		exit(EXIT_FAILURE);
	}

	return 0;
}