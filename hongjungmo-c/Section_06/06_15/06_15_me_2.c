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

#include <stdio.h>
int main(void)
{
	char c;
	for (int i = 0; i < 11; ++i) {
		for (int j = 0; j < i + 1; ++j) { // i = 0, j = 0일 때 0 < 0 + 1이 true이므로 루프 안의 실행문이 실행된다.
			c = 'A' + j;
			printf("%c ", c);
		};
		printf("\n");
	};

	return 0;
}