// 2.9 함수 만들기
/*
	함수는 헤더(header)와 바디(body)로 구성된다.
	함수 헤더(header)는 반환형, 함수명, 매개변수로 구성된다.
	 - 반환형 : 함수 실행의 결과로 반환할 값의 형태
	 - 함수명 : 함수 호출시 사용할 함수의 이름
	 - 매개변수 : 함수 실행에 필요한 인수
	함수 바디(body)는 함수가 수행하는 구체적인 기능을 정의한다.
*/

// 함수
void custom_function(void) // 함수 헤더(header)
{	// 함수 바디(body) - 시작

	printf("Hello World!\n");
	printf("Hello World!\n");
	printf("Hello World!\n");

	// 반환형이 void일 경우 return을 생략할 수 있다.
	//return;

};	// 함수 바디(body) - 끝

#include <stdio.h>
int main(void)
{
	// 생성한 함수 호출 (function call)
	custom_function();

	return 0;
}