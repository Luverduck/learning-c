// 8.5 숫자와 문자를 섞어서 입력받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 출력 함수
void display(char ch, int lines, int width);
// 문자 ch를 총 lines 줄에 걸쳐서 한 줄에 width번 씩 출력
// ex) display('A', 3, 2)
// 문자 'A'를 한 줄당 2개씩 3줄로 출력
// A A
// A A
// A A

int main(void)
{
	char c;
	int rows, cols;

	while (1) 
	{
		scanf("%c %d %d", &c, &rows, &cols);

		display(c, rows, cols);

		if (c == '\n') {
			break;
		}
	};

	return 0;
}

void display(char ch, int lines, int width) 
{
	int row, col;

	for (row = 1; row <= lines; row++) {
		for (col = 1; col <= width; col++) {
			putchar(ch);
		}
		printf("\n");
	}
}