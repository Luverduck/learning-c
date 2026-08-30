// 14.10 복합 리터럴
/*
	복합 리터럴 (Compound Literal)
	복합 리터럴 표현식을 통해 익명의 배열이나 구조체, 공동체를 선언할 수 있다.
	( type ){ initializer-list };
	- type : 선언할 객체 타입
	- initializer-list : 선언할 객체의 초기값

	복합 리터럴의 특징
	복합 리터럴은 l-value로 구분되며, 주소값을 가진다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	// 1. 구조체 변수를 다시 할당 할 수 있다.
	struct Book
	{
		char title[41];
		char author[31];
		float price;
	};

	// 구조체 선언 및 멤버 초기화
	struct Book my_book = { "Crime and Punishment", "Fyodor Dostoyevsky", 11.25f };

	// Syntax Error
	// my_book = { "Alice in Wonderland", "Lewis Carroll", 20.3f };

	// 복합 리터럴을 사용하여 구조체 변수를 다시 할당 할 수 있다.
	my_book = (struct Book){ "Alice in Wonderland", "Lewis Carroll", 20.3f };

	return 0;
}