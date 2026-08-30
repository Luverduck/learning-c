// 7.10 루프 도우미 break와 continue
/*
	continue : continue 이후의 코드를 실행하지 않고 다음 루프로 건너뛴다.
	break : break 이후의 코드를 실행하지 않고 루프를 탈출한다.
*/

#include <stdio.h>
int main(void)
{

	char ch;

	while ((ch = getchar()) != '\n') {
		
		// 특정 경우에만 실행하지 않는 경우 (필터링)
		if (ch == 'a')
			continue;
		putchar(ch);

		// 특정 경우에만 실행하는 경우
		if (ch != 'a')
			printf(ch);
	}

	return 0;
}