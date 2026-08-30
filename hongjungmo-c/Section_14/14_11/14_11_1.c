// 14.11 신축성 있는 배열 멤버
/*
	신축성 있는 배열 멤버 (Flexible Array Member)
	구조체의 마지막 멤버로 선언된 길이가 정해지지 않은 배열
	해당 배열 멤버는 동적 할당을 통해 길이를 자유롭게 조정할 수 있다.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct Flexible
	{
		size_t count;
		double average;
		double values[]; // Flexible Array Member
	};

	// 동적 할당 메모리 갯수
	const size_t n = 3;

	// 구조체 변수의 배열 멤버 동적 할당
	struct Flexible* ptr_flexible = (struct Flexible*)malloc(sizeof(struct Flexible) + n * sizeof(double));
	if (ptr_flexible == NULL) exit(EXIT_FAILURE);

	printf("Flexible Array Member\n");
	// 구조체 변수의 크기
	printf("sizeof struct Flexible %zd\n", sizeof(struct Flexible));
	printf("sizeof *ptr_flexible %zd\n", sizeof(*ptr_flexible));
	// 구조체 변수의 크기 + 동적 할당 메모리의 크기
	printf("sizeof malloc %zd\n\n", sizeof(struct Flexible) + n * sizeof(double));

	// 구조체 변수 멤버들의 메모리 위치
	printf("%lld\n", (long long)ptr_flexible);
	// 구조체 변수의 멤버 count
	printf("%lld\n", (long long)&ptr_flexible->count);
	printf("%zd\n", sizeof(ptr_flexible->count)); // size_t 타입이 unsigned long long으로 정의
	// 구조체 변수의 멤버 average
	printf("%lld\n", (long long)&ptr_flexible->average);
	// 구조체 변수의 배열 멤버
	printf("Address of [ptr_flexible->values]\t%lld\n", (long long)&ptr_flexible->values);
	printf("Value of [ptr_flexible->values]\t\t%lld\n", (long long)ptr_flexible->values);
	// 신축성 있는 배열 멤버는 불완전한 형태이므로 sizeof 연산자로 크기를 알 수 없다.
	printf("sizeof [ptr_flexible->values]\t\t%zd\n", sizeof(ptr_flexible->values));

	return 0;
}