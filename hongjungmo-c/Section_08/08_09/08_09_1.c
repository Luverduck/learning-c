// 8.9 텍스트 파일 읽기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";

	// 파일과의 스트림을 연다.
	file = fopen(file_name, "r");

	if (file == NULL) { // 스트림 열기를 실패할 경우
		printf("Fail to open file.\n");
		exit(1); // 오류(1)로 처리하고 프로그램을 종료한다.
		// 숫자 1은 프로그램 종료시 표시되는 텍스트에서 ~ exited code [숫자]를 의미한다.
	}

	while ((c = getc(file)) != EOF) {
		putchar(c);
	};

	// 파일과의 스트림을 닫는다.
	fclose(file);

	return 0;
}