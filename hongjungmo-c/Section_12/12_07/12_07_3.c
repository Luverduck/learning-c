// 12.7 블록 영역의 정적 변수
/*
	블록 영역 정적 변수 (Static Variable with Block Scope)
	Static with no linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : block
	- 연결 상태 : none
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

int main(void)
{
	// 블록 영역 정적 변수의 특징

	// 2. 변수가 속한 블록 안에서만 식별자를 사용할 수 있다. (block scope)
	// - 변수가 속한 블록 안
	{ // 변수 x의 영역 [START]

		static int x = 1;

		{
			// 변수가 속한 블록 안에서는 식별자 사용 가능
			printf("x = %d\n", x);
		}

	} // 변수 x의 영역 [END]

	// - 변수가 속한 블록 밖
	{

		{ // 변수 y의 영역 [START]

			int y = 5;

		} // 변수 y의 영역 [END]

		// 변수가 속한 블록 영역 밖에서는 식별자 사용 불가능
		// printf("y = %d\n", y);
	}
};