// 6.6 _Bool 자료형

#include <stdio.h>
int main(void)
{
	// 대입 연산자 관련 주의사항
	int i = 0;
	// 1. i에 5를 대입한 후 i의 값을 출력
	printf("%d\n", i = 5); // 결과 : 5

	// 2. i에 5를 대입한 후 i의 값을 조건식에 사용 -> 0(false)가 아니므로 루프를 무한히 반복한다.
	while (i = 5) { // i의 값이 
		printf("Hi\n");
	}

	return 0;
}