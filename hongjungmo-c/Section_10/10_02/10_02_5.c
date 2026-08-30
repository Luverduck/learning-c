// 10.2 배열의 기본적인 사용 방법

#include <stdio.h>
int main(void)
{
	// 배열의 특징
	// 3. 배열을 const로 선언할 경우 배열 요소의 값을 바꿀 수 없다.
	const int arr[3] = { 1, 2, 3 };
	arr[2] = 3;

	return 0;
}