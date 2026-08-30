// 16.7 조건에 따라 다르게 컴파일하기
/*
	전처리 지시자 #ifdef, ifndef
	매크로의 정의 여부에 따라 다른 전처리를 정의한다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define REPORT

int sum(int x, int y)
{
	int result = 0;
	for (int i = x; i <= y; ++i)
	{
		result += i;

#ifdef REPORT
		printf("%d %d\n", result, i);
	}
#endif

}

int main()
{
	printf("\n%d \n", sum(1, 10));

	return 0;
};