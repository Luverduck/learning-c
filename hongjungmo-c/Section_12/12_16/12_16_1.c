// 12.16 calloc(), realloc()
/*
	calloc 함수
	런타임 중 운영 체제로부터 값이 0으로 초기화된 메모리를 할당 받는다.
	void *calloc( size_t n, size_t size );
	- n : 할당할 메모리의 갯수
	- size : 메모리 하나당 크기
	- [return] void* : 할당된 메모리의 주소
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// calloc 함수 사용 예제

	// 할당할 메모리의 갯수
	int n = 10;

	// 0으로 초기화된 int형 메모리 20개를 할당한 후 그 메모리 주소를 ptr에 저장
	int* ptr = NULL;
	ptr = (int*)calloc(n, sizeof(int));

	// 동적 할당에 실패할 경우 프로그램 종료
	if (ptr == NULL) exit(EXIT_FAILURE);

	// 동적 할당 메모리에 저장된 값 출력
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", ptr[i]);
	};

	return 0;
}