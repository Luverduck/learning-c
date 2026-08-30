// 12.8 정적 변수의 외부 연결
/*
	외부 연결된 정적 변수 (Static Variable with External Linkage)
	Static with external linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : external
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

extern int i;

void func()
{
	// 변수가 속한 파일 안에서 식별자를 사용할 수 있다. (file scope)
	printf("%d\n", i);
};

int main()
{
	// 외부 연결된 정적 변수의 특징
	
	// 2. 변수가 속한 파일 안에서 식별자를 사용할 수 있다. (file scope)
	printf("%d\n", i);

	return 0;
};