// 7.10 루프 도우미 break와 continue
/*
	continue : continue 이후의 코드를 실행하지 않고 다음 루프로 건너뛴다.
	break : break 이후의 코드를 실행하지 않고 루프를 탈출한다.
*/

#include <stdio.h>
int main(void)
{
	/* for문에서 continue 사용 */
	for (int count = 0; count < 10; ++count) {
		int c = getchar();
		// 입력한 글자 중 'a'는 출력하지 않는다.
		if (c == 'a')
			continue;
		putchar(c);
	}

	return 0;
}