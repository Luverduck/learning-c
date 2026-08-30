// 9.15 널 포인터와 런타임 에러
/*
	널 포인터 (Null Pointer)
	포인터 선언 후 포인터에 저장된 주소값을 NULL(0)로 초기화
*/

#include <stdio.h>
int main(void)
{
	// 널 포인터 선언
	int* ptr_null_1 = NULL; // NULL로 초기화
	int* ptr_null_2 = 0; // 0으로 초기화

	return 0;
}