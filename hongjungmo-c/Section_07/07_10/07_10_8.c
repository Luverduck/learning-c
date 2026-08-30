// 7.10 루프 도우미 break와 continue
/*
	continue : continue 이후의 코드를 실행하지 않고 다음 루프로 건너뛴다.
	break : break 이후의 코드를 실행하지 않고 루프를 탈출한다.
*/

#include <stdio.h>
int main(void)
{

	char ch;

	while (1) {
		char ch = getchar();
		
		// 특정한 경우 루프 탈출
		if (ch == '.') {
			break;
		}

		putchar(ch);
	}

	return 0;
}