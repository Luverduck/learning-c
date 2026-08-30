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
	// [참고] 가변 길이 배열(VLA)과 동적 할당 배열

	// 가변 길이 배열 (Variable-Length Array)
	int n = 10;
	int arr[n];
	// 1) Stack 영역에서 관리되며 automatic storage duration을 가진다.
	// 2) 한 번 할당된 가변 길이 배열은 길이를 바꿀 수 없다.
	// 3) Visual Studio의 compiler에서 해당 기능을 지원하지 않는다.

	// 동적 할당 배열
	int arr[] = (int*)malloc(10 * sizeof(int));
	// 1) Heap 영역에서 관리되며 dynamic storage duration을 가진다.
	// 2) 할당 해제 후 재할당을 통해 배열의 길이를 바꿀 수 있다.

	return 0;
}