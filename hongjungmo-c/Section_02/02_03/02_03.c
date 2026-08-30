// 2.3 변수가 편리한 이유
/*
	CPU는 '주소'를 통해 메모리에 저장된 값에 접근한다.
	변수를 선언하면 메모리의 특정 주소에 특정 크기만큼 공간이 할당(allocation)된다.
	변수를 선언한 후 반드시 변수의 초기값을 지정해주는 초기화(initiation)을 해야 한다.
	변수의 값을 초기화하지 않으면 원하지 않는 값을 사용하게 된다.
*/

#include <stdio.h>
int main(void)
{

	int number;					// number라는 int형 변수 선언
	number = 3;					// number에 3이라는 값을 저장
	printf("%d\n", number);		// 출력

	return 0;
}