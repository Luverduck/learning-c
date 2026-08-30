// 12.9 정적 변수의 내부 연결
/*
	내부 연결된 정적 변수 (Static Variable with Internal Linkage)
	Static with internal linkage Class에 속하는 변수
	- 지속 시간 : static
	- 변수 영역 : file
	- 연결 상태 : internal
	- 저장 위치 : 데이터 영역 또는 BSS 영역
*/

#include <stdio.h>

static int i = 0;

void func()
{
	printf("%d\n", i);
};

int main()
{
	// 내부 연결된 정적 변수의 특징

	// 3. 파일 밖에서 외부 연결할 수 없다. (internal linkage)
	func();             // 결과 : 0
	printf("%d\n", i);  // 결과 : 0

	return 0;
};