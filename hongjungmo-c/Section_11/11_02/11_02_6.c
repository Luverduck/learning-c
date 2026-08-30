// 11.2 메모리 레이아웃과 문자열

#include <stdio.h>
int main(void)
{
	// 문자열의 특징

	// 5. 문자열의 얕은 복사 (shallow copy)
	const char* ptr_str = "I am a String.";
	const char* ptr_str_copy;

	ptr_str_copy = ptr_str;

	// 원본 문자열
	printf("%s %p %p\n", ptr_str, ptr_str, &ptr_str);
	// 결과 : I am a String. 00007FF70A209D08 000000D0327BF9C8

	// 복사한 문자열
	printf("%s %p %p\n", ptr_str_copy, ptr_str_copy, &ptr_str_copy);
	// 결과 : I am a String. 00007FF70A209D08 000000D0327BF9E8

	return 0;
}