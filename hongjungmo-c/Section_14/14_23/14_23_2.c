// 14.23 자료형에게 별명을 붙여주는 typedef
/*
	예약어 typedef
	기존에 존재하는 자료형의 별칭을 정의한다.
*/

#include <stdio.h>
#include <time.h> // time()

int main(void)
{
	// 이식 가능한 자료형 (Portable Type)
	// 빌드 환경에 따라 다른 자료형을 갖도록 정의된 자료형

	// size_t
	typedef unsigned char BYTE;
	size_t s = sizeof(BYTE);
	// - x86에서 size_t는 unsigned int로 정의
	// - x64에서 size_t는 unsigned long long으로 정의

	// time_t
	time_t t = time(NULL);

	return 0;
}