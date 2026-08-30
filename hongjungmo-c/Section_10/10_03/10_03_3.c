// 10.3 포인터의 산술 연산
/*
	포인터와 포인터의 뺄셈
	포인터와 정수의 덧셈/뺄셈으로부터 포인터와 포인터의 뺄셈의 결과는 정수임을 알 수 있다.
	두 포인터의 뺄셈 결과(정수)는 두 데이터 사이의 간격을 의미한다.
*/

#include <stdio.h>
int main(void)
{
	int arr[4];

	int* ptr_0 = &arr[0];
	int* ptr_2 = &arr[2];
	printf("&arr[0] = %p\n", ptr_0);
	printf("&arr[2] = %p\n", ptr_2);

	int diff = ptr_2 - ptr_0;
	printf("&arr[2] - &arr[0] = %d\n", diff);

	return 0;
}