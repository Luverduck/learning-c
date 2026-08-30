// 13.5 바이너리 파일 입출력

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Reading Example

	FILE* fp = fopen("binary_file", "rb");

	double d;
	int n = 0;

	// 바이너리 파일에서 읽기
	fread(&d, sizeof(d), 1, fp);
	fread(&n, sizeof(n), 1, fp);

	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) exit(1); // 동적 할당에 실패할 경우( !arr )

	// 바이너리 파일에서 읽기
	fread(arr, sizeof(int), n, fp);

	// 파일의 끝(EOF) 여부
	printf("feof = %d\n", feof(fp));

	// 읽은 값 출력
	printf("%f\n", d);
	printf("%d\n", n);
	for(int i = 0; i < n; ++i)
		printf("%d ", *(arr + i));
	printf("\n");

	// 파일의 끝(EOF) 다음 위치를 읽기
	fread(&n, sizeof(n), 1, fp);

	printf("feof = %d\n", feof(fp));		// 결과 : non-zero (EOF가 아님)
	printf("ferror = %d\n", ferror(fp));	// 결과 : 0 (Error가 아님)

	// 파일의 끝(EOF) 다음 위치에 쓰기
	fwrite(&n, sizeof(n), 1, fp);

	printf("feof = %d\n", feof(fp));		// 결과 : non-zero (EOF가 아님)
	printf("ferror = %d\n", ferror(fp));	// 결과 : non-zero (Error)

	fclose(fp);
	free(arr);

	return 0;
}