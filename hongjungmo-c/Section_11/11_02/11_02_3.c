// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징
	
	// 2. 문자열 리터럴과 문자열은 서로 다른 메모리 영역에 저장된다.

	// 문자열 리터럴 (Code segment에 저장)
	const char* ptr_str = "I am a String.";

	// 문자열 (Heap segment에 저장)
	char str[] = "I am a String.";

	// 문자열 리터럴과 문자열의 메모리 주소 출력
	printf("%p %p\n", ptr_str, str);
	// 결과 : 000055EB27379004 00007FFF63D21FB9

	return 0;
}