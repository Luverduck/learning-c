// 12.13 메모리 동적 할당
/*
	동적 할당 메모리 (Dynamic Allocated Memory)
	런타임 중 사용자의 요청에 의해 운영 체제로부터 할당 받는 메모리
	- Heap 영역에 저장되며 사용자가 직접 할당 해제해야 한다.
*/

#include <stdio.h> // malloc(), calloc(), realloc(), free()
int main(void)
{
	// free 함수
	// 런타임 중 운영 체제로부터 할당받은 메모리를 해제한다.
	// void free(void *ptr);
	// - ptr : 할당 해제할 메모리의 주소

	// free 함수 사용 예제
	// int형 20개 크기의 메모리를 할당한 후 그 주소 int*로 형 변환하여 ptr에 저장한다.
	int* ptr = NULL;
	ptr = (int*)malloc(20 * sizeof(int));
	free(ptr);

	return 0;
}