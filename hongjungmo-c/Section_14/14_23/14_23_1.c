// 14.23 자료형에게 별명을 붙여주는 typedef
/*
	예약어 typedef
	기존에 존재하는 자료형의 별칭을 정의한다.
*/

#include <stdio.h>
int main(void)
{
	// typedef의 영역
	// typedef로 정의된 별칭은 블록 스코프 영역을 가진다.

	// 블록 밖에 정의된 unsigned char 자료형의 별칭
	typedef unsigned char BYTE;

	{
		// 블록 안에 정의된 unsigned char 자료형의 별칭
		typedef unsigned char byte;
	};

	return 0;
}