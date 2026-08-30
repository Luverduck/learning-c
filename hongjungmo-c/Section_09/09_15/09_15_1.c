// 9.15 널 포인터와 런타임 에러
/*
	널 포인터 (Null Pointer)
	포인터 선언 후 포인터에 저장된 주소값을 NULL(0)로 초기화 
*/

#include <stdio.h>
int main(void)
{
	// 잘못된 주소로의 역참조

	// 포인터 선언 후 사용자 지정값으로 초기화
	int* ptr = 1234;
	
	printf("%p\n", ptr);
	printf("%d\n", *ptr);

	return 0;
}