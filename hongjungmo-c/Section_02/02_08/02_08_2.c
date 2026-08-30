// 2.8 키워드와 예약어
/*
	키워드 ( 참고 : https://en.cppreference.com/w/c/keyword )
	프로그래밍 언어에서 문법적인 의미를 가지는 단어들

	예약어
	프로그래밍 언어가 문법에 사용하기 위해 미리 사용을 예약한 단어들
	현재 사용하지 않지만 향후 사용 가능성을 고려하여 미리 단어들도 모두 포함
	키워드는 예약어의 일부분으로, 현재 사용하고 있는 예약어라고 생각할 수 있음
	* C언어는 키워드와 예약어의 갯수가 32개로 동일하지만, Java는 키워드와 예약어의 갯수가 동일하지 않음
*/

#include <stdio.h>
int main(void)
{
	// printf는 stdio.h(표준 입출력 라이브러리)에 포함되어있는 출력 함수의 함수명이다.
	// header에 stdio.h를 포함시키지 않으면 printf를 변수명으로 사용해도 상관없다.
	int printf;

	// 그러나 header에 stdio.h를 포함시킨 후 printf를 변수명으로 선언하고 printf 함수를 사용할 경우 
	// 컴파일러가 printf를 변수명으로 인식하기 때문에 'printf' : not a function 오류가 발생한다.
	int printf;
	printf("Hello World!");

	// * printf 함수 호출 -> 변수명으로 선언 순서로 실행하면 상관없긴 하지만 반드시 키워드를 변수명으로 사용하지 말자. 
	printf("Hello World!");
	int printf;

	return 0;
}