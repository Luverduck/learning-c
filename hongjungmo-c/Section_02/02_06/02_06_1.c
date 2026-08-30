// 2.6 printf 함수의 기본적인 사용법

// printf 함수는 stdio.h(표준 입출력 라이브러리)에 포함된 함수이다.
// 따라서 printf 함수를 사용하기 위해서는 반드시 stdio.h를 포함시켜야 한다.
#include <stdio.h>
int main(void)
{
	// 출력 함수 printf (print formatted)
	// 입력을 일정한 형식에 따라 출력하는 함수

	// 출력함수의 사용
	printf("The truth is ... I am Ironman.");

	// Escape sequence
	// 컴파일러가 코드를 해석하던 중 역슬래시(\)를 만나면 
	// 역슬래시(\)와 바로 뒤에 오는 한 문자를 묶어서 특별한 의미로 해석한다.
	// 프로그래밍 언어상 표현할 수 없는 문자나 기능을 표현하는 역할을 한다.

	// \n는 '줄 바꿈'으로 해석된다.
	printf("The truth is ... \nI am Ironman.\n");

	// 쌍 따옴표(")는 문자(열)의 리터럴을 표시할 때 사용하는 기호이다.
	// printf()의 큰 따옴표 쌍(" ") 안에 다시 쌍 따옴표(")를 사용할 수 없다. (쌍 따옴표의 쌍이 깨짐)
	// 쌍 따옴표 쌍(" ") 안에 포함된 쌍 따옴표(")를 문자로 인식하게 하기 위해서는 쌍 따옴표(") 앞에 역슬래시(\)를 붙여야 한다.
	printf("The truth is ... I am \"Ironman\".\n");

	// 홑 따옴표(')를 출력할 때도 마찬가지로 바로 앞에 역슬래시(/)를 붙여야 한다.
	printf("The truth is ... I am \'Ironman\'.\n");

	return 0;
}