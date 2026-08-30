// 6.9 for문의 유연함

#include <stdio.h>
int main(void)
{
	// 1. 루프 카운터의 증가
	printf("[CASE 1]\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", i);
	};

	printf("\n\n");

	// 2. 루프 카운터의 감소
	printf("[CASE 2]\n");
	for (int j = 10; j > 0; j--) {
		printf("%d ", j);
	};

	printf("\n\n");

	// 3. char로 정의된 루프 카운터
	printf("[CASE 3]\n");
	for (char c = 'A'; c <= 'Z'; c++) {
		printf("%c ", c);
	};

	printf("\n\n");

	// 4. double로 정의된 루프 카운터
	printf("[CASE 4]\n");
	for (double d = 100.0; d < 300; d = d * 1.1) {
		printf("%lf ", d);
	};

	printf("\n\n");

	// 5. 복잡한 조건식 사용
	printf("[CASE 5]\n");
	for (int k = 0; k * k < 10; k++) {
		printf("%d ", k);
	};

	printf("\n\n");

	// 6. 2개의 루프 카운터 사용
	printf("[CASE 6]\n");
	for (int x = 1, y = 5; y < 20; y = (++x * 3) + 10) {
		printf("%d ", x);
	};

	printf("\n\n");

	return 0;
}