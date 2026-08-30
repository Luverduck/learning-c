// 16.3 #define 매크로
/*
	전처리 지시문 (Preprocessor Directive)
	컴파일 전에 전처리기가 특정 작업을 수행하도록 하는 명령문
	- #으로 시작한다.
	- 명령문 끝에 세미콜론(;)을 쓰지 않는다.

	매크로 (Macro)
	일련의 명령어를 축약된 형태로 나타내는 명령어
	C 언어에서 상수나 자주 사용하는 표현식 등을 특정한 이름으로 정의한 것을 '매크로(Macro)'라 한다.
	전처리에서 매크로를 지정한 토큰으로 대체하는 것을 '매크로 확장(Macro Expansion)'이라 한다.
*/

// 매크로 정의
// 전처리 지시문 #define을 통해 매크로를 정의할 수 있다.
// 매크로 정의
#define SAY_HELLO printf("Hello, World!");

#include <stdio.h>
int main(void)
{

	return 0;
}