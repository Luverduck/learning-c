// 6.8 for 루프 소개
/*
	for 루프 (For Loop)
	for( [초기식] ; [조건식] ; [증감식] ){
		[실행문]
	};
*/
#include <stdio.h>
int main(void)
{
	// for문 예제
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	};

	printf("\n");

	// while문과 비교
	int j = 0;
	while (j < 10) {
		printf("%d ", j);
		j++;
	};

	return 0;
}