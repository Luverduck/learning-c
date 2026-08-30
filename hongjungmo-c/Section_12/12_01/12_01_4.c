// 12.1 메모리 레이아웃 훑어보기
/*
	C 프로그램의 메모리 영역
	
	4. Heap 영역 (Heap segment)**
	동적으로 관리하는 영역
	- 런타임 중 할당/해제되는 모든 값 또는 변수
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // malloc()

int main(void)
{
	int n = 0;
	scanf("%d", &n);

	// 동적 할당
	char* arr = (char*)malloc(sizeof(char) * n);
	printf("%lld\n", (long long)arr);

	return 0;
}