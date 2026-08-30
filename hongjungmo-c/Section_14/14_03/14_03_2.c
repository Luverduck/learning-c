// 14.3 구조체의 메모리 할당
/*
	구조체 멤버 정렬 (Structure Member Alignment)
	구조체를 메모리에 할당할 때 발생하는 데이터 구조 정렬 (Data Structure Alignment)
	멤버 사이에 [Byte] 단위의 비어있는 메모리를 추가하여 
	구조체의 메모리 크기를 CPU Word의 배수가 되도록 조정하는 것

	CPU Word
	CPU가 한 번에 처리할 수 있는 데이터의 크기를 의미한다.
	- 32Bit 운영 체제 : 4[Byte]
	- 64bit 운영 체제 : 8[Byte]
*/

#include <stdio.h>
int main(void)
{
	// 구조체 Padding1 선언
	struct Padding1 // 멤버의 자료형으로 계산한 구조체의 크기 : 1 + 4 + 8 = 13[Byte]
	{
		char mem_char;
		float mem_float;
		double mem_double;
	};

	// 구조체 Padding1의 변수 선언
	struct Padding1 p1;

	// 구조체 Padding1의 변수 및 멤버의 크기 출력
	printf("struct Padding1 p1\n");
	printf("Sizeof %zd\n", sizeof(p1));
	printf("%lld\n", (long long)&p1);
	printf("%lld\n", (long long)&p1.mem_char);
	printf("%lld\n", (long long)&p1.mem_float);
	printf("%lld\n", (long long)&p1.mem_double);

	printf("\n");

	// 구조체 Padding2 선언
	struct Padding2 // 멤버의 자료형으로 계산한 구조체의 크기 : 1 + 4 + 8 = 13[Byte]
	{
		float mem_float;
		double mem_double;
		char mem_char;
	};

	// 구조체 Padding2의 변수 선언
	struct Padding2 p2;

	// 구조체 Padding2의 변수 및 멤버의 크기 출력
	printf("struct Padding2 p2\n");
	printf("Sizeof %zd\n", sizeof(p2));
	printf("%lld\n", (long long)&p2);
	printf("%lld\n", (long long)&p2.mem_float);
	printf("%lld\n", (long long)&p2.mem_double);
	printf("%lld\n", (long long)&p2.mem_char);

	printf("\n");

	// 구조체 Padding3 선언
	struct Padding3 // 멤버의 자료형으로 계산한 구조체의 크기 : 1 + 4 + 8 = 13[Byte]
	{
		char mem_char;
		double mem_double;
		float mem_float;
	};

	// 구조체 Padding2의 변수 선언
	struct Padding3 p3;

	// 구조체 Padding2의 변수 및 멤버의 크기 출력
	printf("struct Padding3 p3\n");
	printf("Sizeof %zd\n", sizeof(p3));
	printf("%lld\n", (long long)&p3);
	printf("%lld\n", (long long)&p3.mem_char);
	printf("%lld\n", (long long)&p3.mem_double);
	printf("%lld\n", (long long)&p3.mem_float);

	return 0;
}