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
	// 3차원 배열의 동적 할당

	// 행(row), 열(column), 깊이(depth) 지정
	int row = 2, col = 3, depth = 2;

	// 동적 할당 메모리의 주소를 저장할 포인터
	int* ptr_3d = NULL;

	// int형 메모리 (row * col)개를 할당한 후 그 메모리 주소를 ptr_3d에 저장
	ptr_3d = (int*)malloc(sizeof(int) * row * col * depth);

	// 동적 할당에 실패할 경우 프로그램 종료
	if (ptr_3d == NULL) exit(EXIT_FAILURE);

	// 3차원 배열의 요소 초기화
	for (int i = 0; i < depth; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				ptr_3d[(row * col) * i + col * j + k] = (row * col) * i + col * j + k;
			}
		}
	};

	// 3차원 배열의 요소 출력
	for (int i = 0; i < depth; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			for (int k = 0; k < col; ++k)
			{
				printf("%d ", ptr_3d[(row * col) * i + col * j + k]);
			}
			printf("\n");
		}
		printf("\n");
	};

	// ptr_3d에 저장된 주소의 메모리를 할당 해제
	free(ptr_3d);

	// ptr_3d에 저장된 주소를 NULL로 초기화
	ptr_3d = NULL;

	return 0;
}