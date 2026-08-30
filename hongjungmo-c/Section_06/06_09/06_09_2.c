// 6.9 for문의 유연함

#include <stdio.h>
int main(void)
{
	// 7. 증감부의 표현식을 공백으로 할 경우
	for (int i = 2, n = 2; n < 10; ) {
		n = n * i;
		printf("%d ", n);
	};

	// 8. 무한 루프
	/*for ( ; ; ) {
		printf("Hi!\n");
	};*/

	return 0;
}