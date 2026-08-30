// 16.7 조건에 따라 다르게 컴파일하기
/*
	전처리 지시자 #undef
	#define으로 정의된 식별자를 제거한다.
*/

#include <stdio.h>

#define LIMIT 400
#undef LIMIT

int main()
{
	printf("%d\n", LIMIT); // Error
	return 0;
};