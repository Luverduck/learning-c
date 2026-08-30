// 14.20 이름 공간 공유하기
/*
	이름 공간 (Namespace)
	객체(Object)를 구분할 수 있는 범위
	하나의 이름 공간에서 하나의 이름은 단 하나의 객체(Object)만 가리킬 수 있다.
*/

// 이름 공간의 예시
// 1. 하나의 중괄호 안에서 하나의 이름은 단 하나의 객체만을 가리킬 수 있다.

#include <stdio.h>
int main(void)
{
	int name = 123;

	{
		int name = 456;
		// double name = 456; // Error
	};

	return 0;
}