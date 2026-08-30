// 3.10 문자형
/*
	자료형 char
	크기 1[Byte]의 정수 자료형으로 문자 하나를 저장하는 데 사용하는 자료형
	저장하려는 문자와 대응하는 ASCII 코드 번호를 8[bit] 정수로 변환하여 저장

	자료형 char의 연산
	자료형 char는 '문자'에 대응하는 'ASCII 코드 번호(숫자)'를 저장
	자료형 char의 연산은 ASCII 코드 번호에 대한 연산을 하는 것과 같다.
*/
#include <stdio.h>
int main(void)
{
	// 변수에 문자 'A'를 저장
	char char_literal_origin = 'A';
	printf("char_literal_origin is %c %hhd\n", char_literal_origin, char_literal_origin); // %c는 문자 'A', %hdd는 정수 65 출력

	// 변수에 자료형 char인 변수 char_literal_origin에 정수 1을 더한 값을 저장
	char char_literal_plus = char_literal_origin + 1; // 문자 + 정수
	printf("char_literal_plus is %c %hhd\n", char_literal_plus, char_literal_plus); // %c는 문자 'B', %hdd는 정수 66 출력

	return 0;
}