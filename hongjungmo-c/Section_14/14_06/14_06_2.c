// 14.6 구조체와 포인터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 구조체 선언
struct MyData
{
	int mem_int;
	char mem_char;
	float mem_arr[2];
};

int main(void)
{
	// 구조체 변수 data1 선언 및 멤버 초기화
	struct MyData data1 = { 1234, 'A' };
	data1.mem_arr[0] = 1.1f;
	data1.mem_arr[1] = 2.2f;

	// 구조체 변수 data1의 멤버 출력
	printf("%d %c %lld\n", data1.mem_int, data1.mem_char, (long long)data1.mem_arr);
	printf("%f %f\n", data1.mem_arr[0], data1.mem_arr[1]);
	printf("%lld %lld\n\n", (long long)&data1.mem_arr[0], (long long)&data1.mem_arr[1]);

	// 구조체 변수 data2 선언 및 멤버를 구조체 data1의 멤버의 값으로 초기화
	// 구조체 변수를 대입 연산하면 왼쪽 구조체 멤버의 모든 값을 오른쪽 구조체 멤버의 값으로 복사한다.
	struct MyData data2 = data1;

	// 구조체 변수 data2의 멤버 출력
	printf("%d %c %lld\n", data2.mem_int, data2.mem_char, (long long)data2.mem_arr);
	printf("%f %f\n", data2.mem_arr[0], data2.mem_arr[1]);
	printf("%lld %lld\n\n", (long long)&data2.mem_arr[0], (long long)&data2.mem_arr[1]);

	return 0;
}