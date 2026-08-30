// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징
	
	// 3. 포인터로 선언된 문자열을 배열로 선언된 문자열로 초기화 할 수 있다. (반대는 불가능)

	// 배열로 선언된 문자열
	char str[] = "I am a String.";

	// 포인터로 선언된 문자열
	const char* ptr_str = "I am a String!";

	// 포인터로 선언된 문자열을 배열로 선언된 문자열로 초기화
	ptr_str = str;
	//str = ptr_str;  // Error

	return 0;
}