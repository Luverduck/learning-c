// 14.20 이름 공간 공유하기
/*
	이름 공간 (Namespace)
	객체(Object)를 구분할 수 있는 범위
	하나의 이름 공간에서 하나의 이름은 단 하나의 객체(Object)만 가리킬 수 있다.
*/

// 이름 공간의 예시
// 4. 하나의 이름 공간에서 함수명과 같은 변수명을 선언할 수 없다.

#include <stdio.h>
// func라는 이름의 함수 선언
int func()
{
	return 0;
};

int main()
{
	// func라는 변수명은 사용할 수 없다.
	//int func = func(); // Error
};