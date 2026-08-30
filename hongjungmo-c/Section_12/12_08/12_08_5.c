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

int main()
{
	// 외부 연결된 정적 변수의 특징

	// 3. 파일 밖의 식별자가 같으며 내부 연결되지 않은 전역 변수와 객체를 공유한다. (external linkage)
	func();
	printf("%p\n", &i);

	return 0;
};