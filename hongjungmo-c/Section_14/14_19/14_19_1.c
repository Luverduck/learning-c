// 14.19 열거형 연습문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcmp()
#include <stdbool.h> // C99

enum Spectrum { RED, ORANGE, YELLOW, GREEN, BLUE };
const char* colors[] = { "red", "orange", "yellow", "green", "blue" };

#define LEN 30

int main(void)
{
	char choice[LEN] = { 0, };

	enum Spectrum color;

	bool color_is_found = false;

	while (1)
	{
		printf("Input a color name (empty line to quit):\n");

		// 입력값이 공백일 경우 루프 종료
		if (scanf("%[^\n]%*c", choice) != 1)
			break;

		// 입력값이 colors 요소에 포함되는지 확인 
		for (color = RED; color <= BLUE; ++color)
		{
			if (strcmp(choice, colors[color]) == 0)
			{
				color_is_found = true;
				break;
			}
		}

		if (color_is_found)
			switch (color)
			{
			case RED:
				puts("Red Roses.\n");
				break;
			case ORANGE:
				puts("Oranges are delicious.\n");
				break;
			case YELLOW:
				puts("Yellow Sunflowers.\n");
				break;
			case GREEN:
				puts("Green Apples.\n");
				break;
			case BLUE:
				puts("Blue Ocean.\n");
				break;
			}
		else
			printf("Please try different color %s.\n", choice);
		
		// 다음 루프 진행을 위해 false로 초기화
		color_is_found = false;
	};

	puts("Good Bye!");

	return 0;
}