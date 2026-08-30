// 12.16 calloc(), realloc()
/*
	realloc 함수
	런타임 중 운영 체제로부터 이미 할당된 메모리를 반납하고 재할당 받는다.
	void *realloc( void *ptr, size_t size );
	- ptr : 할당할 메모리의 갯수
	- size : 메모리 하나당 크기
	- [return] void* : 할당된 메모리의 주소
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// realloc 함수 사용 예제

	// 할당할 메모리의 갯수
	int n = 10;

	// 0으로 초기화된 int형 메모리 20개를 할당한 후 그 메모리 주소를 ptr에 저장
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));

	// 동적 할당에 실패할 경우 프로그램 종료
	if (ptr == NULL) exit(EXIT_FAILURE);

	// 동적 할당 메모리의 초기화
	for (int i = 0; i < n; ++i)
	{
		ptr[i] = i;
	};

	// 동적 할당 메모리에 저장된 값 출력
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr[i]);
	};

	printf("\n");

	// 재할당할 메모리의 갯수
	n = 5;

	// 동적 할당 메모리의 재할당
	int* ptr_re = NULL;
	ptr_re = (int*)realloc(ptr, n * sizeof(int));

	// 동적 할당에 실패할 경우 프로그램 종료
	if (ptr_re == NULL) exit(EXIT_FAILURE);

	// 동적 할당 메모리에 저장된 값 출력
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr_re[i]);
	};

	return 0;
}