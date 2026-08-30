// 8.5 숫자와 문자를 섞어서 입력받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 출력 함수
void display(char ch, int lines, int width);
// 문자 ch를 총 lines 줄에 걸쳐서 한 줄에 width번 씩 출력
// scanf 함수의 단점
// - 인수의 갯수만큼 입력될 때까지 입력을 기다린다. => 지정한 갯수만큼의 인수를 읽을 때까지 입력을 대기 (다음 코드가 진행되지 않음)  

int main(void)
{
	char c;
	int rows, cols;

	// 수정 1-1) 입력을 읽는 부분 분리 (c)
	while ((c = getchar()) != '\n') 
	{
		// 수정 1-2) 입력을 읽는 부분 분리 (rows, cols)
		scanf("%d %d", &rows, &cols);

		display(c, rows, cols);

		// 수정 2) 입력 버퍼 비우기
		while (getchar() != '\n') {
			continue;
		}

		printf("Input another character and two integers :\n");
		printf("Press Enter to quit.\n");
	};

	return 0;
}

void display(char ch, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; ++row) {
		for (col = 1; col <= width; ++col) {
			putchar(ch);
		}
		printf("\n");
	}
}