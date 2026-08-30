// 16.11 inline 함수
/*
	inline 키워드
	컴파일러가 함수를 호출하지 않고 해당 함수의 정의를 대체(replace)하도록 **제안**한다.

	inline 함수
	inline 키워드로 정의된 함수
	- static 키워드를 사용하여 internal linkage로 정의해야 한다.
*/

static inline int foo()
{
	return 5;
}

#include <stdio.h>
int main(void)
{
	int ret;

	// inline function
	ret = foo();

	printf("Output is : %d\n", ret);

	return 0;
}