// 12.13 메모리 동적 할당
/*
	동적 할당 메모리 (Dynamic Allocated Memory)
	런타임 중 사용자의 요청에 의해 운영 체제로부터 할당 받는 메모리
	- Heap 영역에 저장되며 사용자가 직접 할당 해제해야 한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 메모리 동적 할당
	int* ptr = NULL;
	ptr = (int*)malloc(30 * sizeof(int));

	// 동적 할당에 실패하면
	if (ptr == NULL) {
		// 할당 실패 출력
		puts("Memory allocation failed");
		// 1을 반환하고 프로그램을 종료 (return 1)
		exit(EXIT_FAILURE);
	}

	// 동적 메모리 할당 해제 전 메모리 주소
	printf("Before free %p\n", ptr);
	// 동적 메모리 할당 해제
	free(ptr);
	// 동적 메모리 할당 해제 후 메모리 주소
	printf("After free %p\n", ptr);

	return 0;
}