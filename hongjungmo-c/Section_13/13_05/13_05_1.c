// 13.5 바이너리 파일 입출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Writing Example

	FILE* fp = fopen("binary_file", "wb");

	double d = 1.0 / 3.0;
	int n = 123;

	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) exit(1); // 동적 할당에 실패할 경우( !arr )
	for (int i = 0; i < n; ++i)
		*(arr + i) = i * 2;

	// 바이너리 파일에 쓰기
	fwrite(&d, sizeof(d), 1, fp);
	fwrite(&n, sizeof(n), 1, fp);
	fwrite(arr, sizeof(int), n, fp);

	fclose(fp);
	free(arr);

	return 0;
}