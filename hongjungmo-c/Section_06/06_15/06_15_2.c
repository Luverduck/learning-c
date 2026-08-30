// 6.15 중첩된 루프들
/*
	TO DO : 다음과 같이 출력
	A
	A B
	A B C
	A B C D
	A B C D E
	A B C D E F
	A B C D E F G
	A B C D E F G H
	A B C D E F G H I
	A B C D E F G H I J
	A B C D E F G H I J K
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 11
#define FIRST_CHAR 'A'
#define LAST_CHAR 'K'

int main(void)
{
	int r; // row loop
	int c; // character loop

	// outer row loop
	for (r = 0; r < NUM_ROWS; ++r) {
		// inner character loop
		for (c = FIRST_CHAR; c <= FIRST_CHAR + r; ++c) { // r = 0, c = 65이며 65 <= 65 + 0이 true이므로 루프 안의 실행문이 실행된다.
			printf("%c ", c);
		}
		printf("\n");
	}

	return 0;
}