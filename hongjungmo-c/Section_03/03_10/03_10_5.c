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
	// 금액 입력기
	float salary;
	// 초기 입력 문구 $______를 표시하며 커서가 가장 첫 번째 _에 위치하도록
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary); 
	// Return value ignored : 'scnaf'.
	// scanf의 반환값(입력받은 값)을 다른 어딘가에 사용하지 않을 때 발생하는 경고 

	return 0;
}