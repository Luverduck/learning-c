// 9.17 포인터 변수의 크기

#include <stdio.h>
int main(void)
{
	char a; // 1[byte]
	float b; // 4[byte]
	double c; // 8[byte]

	char* ptr_a = &a;
	float* ptr_b = &b;
	double* ptr_c = &c;

	printf("%zd %zd %zd\n", sizeof(a), sizeof(b), sizeof(c));
	printf("%zd %zd %zd\n", sizeof(ptr_a), sizeof(ptr_b), sizeof(ptr_c));
	printf("%zd %zd %zd\n", sizeof(&a), sizeof(&b), sizeof(&c));
	printf("%zd %zd %zd\n", sizeof(char*), sizeof(float*), sizeof(double*));

	return 0;
}