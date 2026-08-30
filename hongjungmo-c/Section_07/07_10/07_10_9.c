// 7.10 루프 도우미 break와 continue
/*
	continue : continue 이후의 코드를 실행하지 않고 다음 루프로 건너뛴다.
	break : break 이후의 코드를 실행하지 않고 루프를 탈출한다.
*/

#include <stdio.h>
int main(void)
{

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			/*if (j == 5)
				break;*/
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
}