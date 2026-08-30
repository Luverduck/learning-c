// 2.9 함수 만들기
/*
	함수를 만들 때
	함수 헤더를 선언(function declaration)한 후
	함수 바디에 함수의 구체적인 기능을 정의(function defitnition)해야 한다.

	함수의 선언과 동시에 정의 할 수 있지만 함수의 선언과 정의를 분리할 수도 있다.
	함수의 선언과 정의를 분리할 경우 함수의 선언부를 함수 원형(function prototype)이라 한다.

	함수의 선언과 정의가 분리되어있는 경우
	main 함수에서 새로 정의한 함수를 호출하기 위해서는 
	main 함수 앞에서 정의한 함수를 선언한 후 main 함수 뒤에서 정의해야 한다.
*/

// ii) 함수 원형 선언 (function declaration)
void say_hello_prototype(); // 함수 원형 (function prototype)

#include <stdio.h>
int main(void)
{
	// 생성한 say_hello_prototype 함수 호출
	say_hello_prototype();

	return 0;
}

// ii) 함수 원형을 구체적으로 정의 (function definition)
void say_hello_prototype()
{
	printf("Hello World!\n");
	printf("Hello World!\n");
};
