// 7.10 루프 도우미 break와 continue
/*
	continue : continue 이후의 코드를 실행하지 않고 다음 루프로 건너뛴다.
	break : break 이후의 코드를 실행하지 않고 루프를 탈출한다.
*/

#include <stdio.h>
int main(void)
{
	/* while문에서 continue를 placeholder로 사용하는 경우 */
	// * placeholder: 빠져 있는 다른 것을 대신하는 기호나 텍스트의 일부
	while (getchar() != '\n')
		continue;

	return 0;
}