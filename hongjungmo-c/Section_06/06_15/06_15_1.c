// 6.15 중첩된 루프들
/*
	TO DO : 다음과 같이 출력
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 5
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main(void)
{
	int r; // row loop
	int c; // character loop

	for (r = 0; r < NUM_ROWS; ++r) { // outer row loop
		for (c = FIRST_CHAR; c <= LAST_CHAR; ++c) { // inner character loop
			printf("%c ", c);
		}
		printf("\n");
	}

	return 0;
}