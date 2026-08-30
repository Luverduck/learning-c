// 11.10 명령줄 인수
/*
	명령줄 인수 (Command-Line Argument)
	프로그램을 실행할 때 운영체제의 명령줄 쉘에 의해 입력받은 인수
	- 명령줄 인수는 띄어쓰기 `“ “`로 구분
	- 0번째 명령줄 인수는 실행한 프로그램의 이름(경로)

	main 함수
	프로그램을 실행할 때 해당 프로그램을 실행한 부모 프로세스에 의해 호출되는 함수
	1) 명령줄 인수 없이 main 함수 호출
	int main() {   body   };
	int main(void) {   body  };

	2) 명령줄 인수 포함 main 함수 호출
	int main( int argc, char* argv[] ) {   body   };
	- argc : 인수 갯수 (arguments count)
	- argv : 인수 벡터 (arguments vector)
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char* argv[])
{
	// Visual Studio 내에서 명령줄 인수 설정
	if (argc < 3)
		printf("Wrong usage of %s\n", argv[0]);
	else
	{
		int times = atoi(argv[1]);

		for (int i = 0; i < times; ++i)
			puts(argv[2]);
	}

	return 0;
};