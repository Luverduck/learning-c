// 8.7 입력 스트림과 숫자

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[255];
	int i1, i2;
	double d;

	scanf("%s %d %lf", str, &i1, &d);
	printf("%s %d %f\n", str, i1, d);

	scanf("%s %d %d", str, &i1, &i2);
	printf("%s %d %d\n", str, i1, i2);

	char c;
	while ((c = getchar()) != '\n') {
		putchar(c);
	};

	return 0;
}