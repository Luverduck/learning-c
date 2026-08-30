// 6.15 중첩된 루프들
/*
	TO DO : 다음과 같이 출력
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
	A B C D E F G H I J K
*/

#include <stdio.h>
int main(void)
{
	char c;
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 11; ++j) {
			c = 'A' + j;
			printf("%c ", c);
		};
		printf("\n");
	};

	return 0;
}