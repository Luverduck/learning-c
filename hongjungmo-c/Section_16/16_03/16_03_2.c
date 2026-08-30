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

// 매크로의 종류

// 객체 형태로 정의된 매크로(Object - Like Macro)
// 1) 일반적인 Object-Like Macro : 기호적 상수 (Symbolic Constant) 또는 명백한 상수 (Manifest Constant)라 한다.
// - 기호적 상수 (Symbolic Constant) 또는 명백한 상수 (Manifest Constant)
#define PI 3.141592
#define GRAVITY 9.8
// - 함수
#define SAY_HELLO for(int i = 0; i < 10; ++i) printf("Hello, World!\n");

// 2) Chain Macro : 기존에 정의된 매크로를 통해 정의된 Object-Like Macro
#define THREE 3
#define NINE THREE*THREE

// 3) Multi-Line Macro : 여러 행으로 정의된 Object-Like Macro
#define MESSAGE "The greatest glory in living lies not in never falling, \
but in rising every time we fall."

// 함수 형태로 정의된 매크로 (Function-Like Macro)
#define SQUARE(X) X*X

#include <stdio.h>
int main(void)
{
	// 객체 형태로 정의된 매크로(Object - Like Macro)
	printf("%f\n", PI);
	printf("%f\n", GRAVITY);
	SAY_HELLO;
	printf("%d %d\n", THREE, NINE);
	printf("%s\n", MESSAGE);

	// 함수 형태로 정의된 매크로 (Function-Like Macro)
	printf("%d", SQUARE(9));

	return 0;
}