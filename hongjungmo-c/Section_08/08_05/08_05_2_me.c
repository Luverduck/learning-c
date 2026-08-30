// 8.5 숫자와 문자를 섞어서 입력받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 출력 함수
void display(char ch, int lines, int width);
// 문자 ch를 총 lines 줄에 걸쳐서 한 줄에 width번 씩 출력
// - 두 번째 시행부터 발생하는 공백 문제점 해결

int main(void)
{
	char c;
	int rows, cols;

	while (1) {

		scanf("%c %d %d", &c, &rows, &cols);

		display(c, rows, cols);

		if (c == '\n') {
			break;
		}
	};

	return 0;
}

void display(char ch, int lines, int width) {
	for (int i = 0; i < lines; ++i) {
		for (int j = 0; j < width; ++j) {
			printf("%c", ch);
		}
		printf("\n");
	}
}