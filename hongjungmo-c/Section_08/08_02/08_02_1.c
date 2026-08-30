// 8.2 파일의 끝
/*
	파일의 끝 (End of File)
	데이터 소스(파일, 스트림)의 끝을 나타내는 조건

	입력 함수의 EOF
	버퍼를 사용하는 입력 함수 getchar()는 입력받은 값을 unsigned char로 읽고 signed int로 반환한다.
	만약, 입력 버퍼의 끝에 도달하거나 오류가 발생한 경우 EOF에 해당하는 값인 -1을 반환한다.
	- ASCII 코드의 코드 번호는 0부터 255이므로 unsigned char에 손실 없이 저장할 수 있다.

	EOF를 강제로 입력하는 방법
	- UNIX 계열의 경우 [Ctrl]+[D] 입력 후 [Enter]
	- Windows 계열의 경우 [Ctrl]+[Z] 입력 후 [Enter]
*/

#include <stdio.h>
int main(void)
{
	int ch;

	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}