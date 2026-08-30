// 10.17 변수로 길이를 정할 수 있는 배열
/*
	변수로 길이를 정할 수 있는 배열 (Variable-Length Arrays, VLAs)
	배열의 길이를 런타임 중에 정할 수 있는 배열
	배열의 길이를 정하는 시간을 유동적으로 정할 수 있는 배열 
	(한 번 결정된 배열의 길이는 바꿀 수 없다)
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	// 길이 입력
	int n;
	printf("Input array length : ");
	scnaf("%d", &n);

	// 입력받은 길이의 배열 생성 (Visual Studio에서는 C90을 따르므로 지원하지 않는다)
	float my_arr[n]; // 한 번 결정된 배열의 길이는 바꿀 수 없다

	// 배열의 요소 초기화
	for (int i = 0; i < n; ++i) {
		my_arr[i] = (float)i;
	};

	// 배열의 요소 출력
	for (int i = 0; i < n; ++i) {
		printf("%f\n", my_arr[i]);
	};

	return 0;
}