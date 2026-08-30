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

#include <stdbool.h>
int main(void)
{
	// header에 stdbool.h를 포함시킨 후 bool를 변수명으로 선언하면
	// invalid combination of type specifiers 오류가 발생한다.
	int bool;

	return 0;
}