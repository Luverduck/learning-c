// 11.2 메모리 레이아웃과 문자열
/*
	C 프로그램의 메모리 구조

	1. Code 영역 (Code segment)
	실행 가능한 프로그램 코드를 저장하는 영역

	2. Data 영역 (Data segment)
	초기화된 정적 변수를 저장하는 영역
	- 명시적으로 초기화된 전역 변수 / 지역 정적 변수

	3. BSS 영역 (Block Started by Symbol segment)
	초기화되지 않은 정적 변수를 저장하는 영역
	- 0으로 초기화 되었거나 명시적으로 초기화하지 않은 전역 변수 / 지역 정적 변수

	4. Heap 영역 (Heap segment)
	동적으로 관리하는 영역
	- 런타임 중 할당/해제되는 모든 값 또는 변수

	Stack 영역 (Stack segment)
	함수의 호출 스택(Call Stack)을 관리하는 영역
	- 함수에 전달되는 매개 변수의 값
	- 반환할 함수의 메모리 주소
	- 함수 내에서 사용하는 지역 변수
*/

#include <stdio.h>
int main(void)
{
	// 배열로 선언된 문자열
	// Code 영역에 있는 문자열 리터럴 “Hello, World!”을 배열의 요소로 복사한다.
	// 즉, 읽기/쓰기 영역에 저장한 문자열 리터럴의 복사본에 접근한다.
	char str[] = "Hello, World!";

	// 읽기/쓰기 영역에 저장된 문자열 요소의 값은 변경할 수 있다.
	str[0] = 'B'; // "Bello, World!"

	// 포인터로 선언된 문자열
	// Code 영역에 있는 문자열 리터럴 “Hello, World!”의 시작 주소를 저장한다.
	// 즉, 읽기 전용 영역의 문자열 리터럴의 원본에 접근한다.
	const char* ptr_str = "Hello, World!";

	// 읽기 전용 영역에 저장된 문자열 리터럴의 값은 변경할 수 없다.
	//ptr_str[0] = "B";    // Error

	return 0;
}