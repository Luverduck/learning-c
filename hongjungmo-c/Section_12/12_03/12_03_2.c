// 12.3 변수의 영역과 연결 상태, 객체의 지속 시간
/*
	[참고] 레이블(label)의 영역
	레이블(label)은 해당 레이블명이 포함된 함수 스코프를 가진다.
*/

#include <stdio.h>

int func(int var_arg);

int main()
{
	func(3);
	
	return 0;
};

int func(int var_arg)
{
	int var_local = 0;

	for (int i = 0; i < 10; ++i)
	{
		int temp = var_arg * i;

		var_local *= temp;

		if (i == 5) {
			goto hello;
		};
	};

hello: // hello는 func 함수 스코프를 가진다.
	printf("Hello, World!");

	return 0;
};