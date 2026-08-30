// 3.10 문자형
/*
	자료형 char
	크기 1[Byte]의 정수 자료형으로 문자 하나를 저장하는 데 사용하는 자료형
	저장하려는 문자와 대응하는 ASCII 코드 번호를 8[bit] 정수로 변환하여 저장

	자료형 char 출력시 서식 지정자
	- 문자로 출력시 : %c
	- 숫자로 출력시 : %hhd
	  (* 여기서 h는 half의 약자로 자료형 int의 크기 4[Byte] 기준 half의 half를 취한 값이 1[Byte]이기 때문)
*/
#include <stdio.h>
int main(void)
{
	// 변수에 문자 'A'를 저장
	char char_literal_1 = 'A';
	printf("char_literal_1 is %c %hhd\n", char_literal_1, char_literal_1); // %c는 문자 'A', %hdd는 정수 65 출력

	// 변수에 문자 '*'를 저장
	char char_literal_2 = '*';
	printf("char_literal_2 is %c %hhd\n", char_literal_2, char_literal_2); // %c는 문자 '*', %hdd는 정수 42 출력

	return 0;
}