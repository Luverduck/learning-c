// 14.20 이름 공간 공유하기
/*
	이름 공간 (Namespace)
	객체(Object)를 구분할 수 있는 범위
	하나의 이름 공간에서 하나의 이름은 단 하나의 객체(Object)만 가리킬 수 있다.
*/

// 이름 공간의 예시
// 2. 구조체에서 태그명과 변수명은 다른 이름 공간을 가진다.

#include <stdio.h>
int main(void)
{
	// 구조체 태그명 rect
	struct rect { double x; double y; };

	// 구조체의 태그명과 같은 이름의 구조체 변수를 선언할 수 있다.
	//struct rect rect = { 1.1, 1.2 };

	// 구조체의 태그명과 같은 이름의 변수를 선언할 수 있다. (C++에서는 허용하지 않음)
	int rect = 1;

	return 0;
}