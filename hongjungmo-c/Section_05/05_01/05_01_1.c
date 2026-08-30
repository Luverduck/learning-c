// 5.1 반복 루프와의 첫 만남
/*
	goto문
	특정 줄 번호나 레이블로 코드 실행을 건너뛸 때 사용하는 명령어
*/

#include <stdio.h>
int main(void)
{
	int n = 1;

label1:
	
	printf("%d\n", n);
	n = n + 1;

	if (n == 10) goto out; // 특정 조건이 될 경우 out으로 나감

	goto label1; // label1으로 돌아감

out:

	return 0;
}