// 16.6 #include와 헤더 파일
/*
	전처리 지시문 #include
	지정된 경로에 있는 헤더 파일을 소스 코드에 포함시킨다.
*/

#include <stdio.h>
int main(void)
{
	// 전처리 지시문 #include의 동작
	// 전처리 지시문 #include를 헤더 파일의 소스 코드로 교체한다.
#include "hello_world.h" // hello_world.h의 printf 함수 실행

	return 0;
}