// 5.9 표현식과 문장
/*
	시퀀스 포인트 (sequence point)
	표현식을 평가하는 도중 부수 효과가 일어나는 지점
*/

#include <stdio.h>
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int i = 0;

	// 시퀀스 포인트
	// 1. 전체 표현식(full expression)의 끝
	x = (y + 1) + (z = 3);

	// 2. 반복문에서 제어 표현식(controlling expression)의 끝
	// 2-1) while문에서 제어 표현식(controlling expression)의 끝
	while (i < 10) { // <- end of controlling expression
		// [statement]
	};

	// 2-2) do ~ while문에서 제어 표현식(controlling expression)의 끝
	do {
		// [statement]
	} while (i < 10); // <- end of controlling expression

	// 2-3) for문에서 각 제어 표현식(controlling expression)의 끝
	for (i = 0; i < 10; i++) { // end of each controlling expression
		// [statement]
	};

	// 3. 분기문에서 제어 표현식(controlling expression)의 끝
	// 3-1) if문에서 제어 표현식(controlling expression)의 끝
	if ( i < 0 ) { // <- end of controlling expression
		// [statement]
	};

	// 3-2) switch문에서 제어 표현식(controlling expression)의 끝
	switch ( i < 0 ) { // <- end of controlling expression
		// [statement]
	};

	return 0;
}