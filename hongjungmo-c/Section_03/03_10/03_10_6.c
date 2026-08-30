// 3.10 문자형
/*
	자료형 char
	크기 1[Byte]의 정수 자료형으로 문자 하나를 저장하는 데 사용하는 자료형
	저장하려는 문자와 대응하는 ASCII 코드 번호를 8[bit] 정수로 변환하여 저장

	자료형 char와 Escape Sequence
	자료형 char에 Escape Sequence를 저장 및 출력할 수 있다.
	- 백슬래시 표현 : https://learn.microsoft.com/ko-kr/cpp/c-language/escape-sequences?view=msvc-170
	- ASCII 코드 번호 : https://en.cppreference.com/w/cpp/language/ascii
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	// 다양한 Escape Sequence
	printf("AB\tCDEF\n");
	// \t : 가로 Tap
	// \n : 줄바꿈

	printf("\\ \'HA+\' \"Hello\" \?\n");
	// \\ : 백슬래시(\)를 문자로 출력
	// \' : 홑따옴표(')를 문자로 출력
	// \" : 쌍따옴표(")를 문자로 출력
	// \? : 물음표(?)를 문자로 출력

	return 0;
}