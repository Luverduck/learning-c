// 12.15 동적 할당 메모리를 배열처럼 사용하기
/*
	동적 할당 메모리와 배열
	운영 체제에 메모리 동적 할당 요청 시 연속적인 주소의 메모리 공간을 할당 받는다.
	따라서 메모리 동적 할당을 통해 배열을 선언할 수 있다. (배열은 메모리 상의 연속적인 주소 공간을 갖는다.)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 일반 변수의 동적 할당

	// 동적 할당 메모리의 주소를 저장할 포인터
	int* ptr = NULL;

	// int형 메모리 1개를 할당한 후 그 메모리 주소를 ptr에 저장
	ptr = (int*)malloc(sizeof(int) * 1);

	// 동적 할당에 실패할 경우 프로그램 종료
	if (ptr == NULL) exit(EXIT_FAILURE);

	// ptr에 저장된 주소의 메모리를 할당 해제
	free(ptr);

	// ptr에 저장된 주소를 NULL로 초기화
	ptr = NULL;

	return 0;
}