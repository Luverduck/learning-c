// 4.4 strlen() 함수
/*
	strlen()
	문자열(char의 배열)에서 NULL(\0) 이전까지 문자의 수 반환
*/

#include <stdio.h>
#include <string.h> // strlen()가 포함된 라이브러리 (이 라이브러리를 포함하지 않을 경우 strlen()의 반환형이 int로 나와서 오류 발생
#include <stdlib.h> // malloc()가 포함된 라이브러리
int main(void)
{
	// 문자열을 저장하기 위해 char 타입 크기의 메모리 공간 100개를 동적 할당
	char *str5 = (char*)malloc(sizeof(char) * 100);
	
	// 배열의 각 요소에 직접 값을 대입
	str5[0] = 'H';
	str5[1] = 'e';
	str5[2] = 'l'; 
	str5[3] = 'l';
	str5[4] = 'o';
	str5[5] = '\0';

	printf("str5 : %zu %zu\n", sizeof(str5), strlen(str5)); // 결과 : 8 5 (64bit) / 4 5 (32bit)
	
	// 포인터 변수에는 문자열 배열 0번째 요소의 주소가 저장된다.
	// 따라서 sizeof 연산의 결과는 포인터 변수에 저장된 주소값의 크기이다.
	// 실행 환경(플랫폼)에 따라 sizeof 연산의 결과가 다르다.
	// 64bit 환경에서는 8[Byte]의 주소값을 사용하므로 sizeof 연산의 결과는 8이 되며
	// 32bit 환경에서는 4[Byte]의 주소값을 사용하므로 sizeof 연산의 결과는 4가 된다

	return 0;
}