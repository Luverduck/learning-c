// 5.1 반복 루프와의 첫 만남
/*
	while문
	조건부가 true일 동안만 반복
*/

#include <stdio.h>
int main(void)
{
	int n = 1;

	while (n < 11) { // n이 11보다 작은 동안만 반복
		printf("%d\n", n);
		n = n + 1;
	}
	
	return 0;
}