// 12.14 메모리 누수와 free()의 중요성
/*
	메모리 누수(leak)
	프로그램이 더 이상 필요하지 않은 메모리를 점유하고 있는 현상
	메모리 누수를 방지하기 위해서는 반드시 `free()`로 사용이 끝난 메모리를 할당 해제해야 한다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// Debugging을 위한 Dummy Output
	printf("Dummy Output\n");

	{
		// 메모리 동적 할당
		int n = 100000000;
		int* ptr = (int*)malloc(n * sizeof(int));

		// 동적 할당에 실패한 경우
		if (ptr == NULL)
		{
			printf("Memory Allocation Failed\n");
			exit(EXIT_FAILURE); // EXIT_FAILURE를 반환한 후 프로그램 종료
		}

		// 동적 할당 메모리 초기화
		for (int i = 0; i < n; ++i)
			ptr[i] = i + 1;

		// 동적 할당 메모리 해제
		free(ptr);
	}

	// Debugging을 위한 Dummy Output
	printf("Dummy Output\n");

	return 0;
}