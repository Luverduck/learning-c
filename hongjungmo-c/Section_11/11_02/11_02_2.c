// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징
	
	// 1. 동일한 문자열을 여러 번 선언할 때 Code 영역에 최초 1회만 할당하며 해당 값을 공유한다.
	const char* ptr_str_1 = "I am a String.";
	const char* ptr_str_2 = "I am a String.";
	const char* ptr_str_3 = "I am a String!!!";

	printf("%p %p %p\n", ptr_str_1, ptr_str_2, ptr_str_3);
	// 결과 : 00007FF681DC9C28 00007FF681DC9C28 00007FF681DC9C40

	printf("%p\n", "I am a String.");
	// 결과 : 00007FF681DC9C28

	return 0;
}