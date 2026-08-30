// 9.14 포인터와 코딩 스타일

#include <stdio.h>
int main(void)
{
	// 포인터 선언시 asterisk(*)의 위치
	int* ptr_1; // 자료형 뒤에 붙이는 경우
	int *ptr_2; // 변수명 앞에 붙이는 경우

	// 두 개 이상의 포인터를 한 줄에 선언
	int* ptr_3, * ptr_4;
	int *ptr_3, *ptr_4;
	
	// 만약 둘 중 하나에 asterisk(*)를 붙이지 않으면 int형으로 선언된다.
	int* ptr_5, ptr_6;
	// - ptr_5에 마우스를 올려놓으면 int *ptr_5로 표기된다.
	// - ptr_6에 마우스를 올려놓으면 int ptr_6로 표기된다.

	// CPP에서는 asterisk(*)를 앞에 붙이며, 여러 줄로 선언할 것을 권장한다.
	int* ptr_7;
	int* ptr_8;

	return 0;
}