// 13.8 텍스트 파일을 바이너리처럼 읽어보기

#include <stdio.h>
#include <windows.h> // SetConsoleOutputCP()

int main(void)
{
	// 파일 스트림 열기
	FILE* fp = fopen("test.txt", "rb");

	unsigned char ch;

	SetConsoleOutputCP(CP_UTF8); 

	// 파일 스트림에서 unsigned char 크기의 데이터 1개를 읽고 ch에 '쓰기' 한다.
	while (fread(&ch, sizeof(unsigned char), 1, fp) > 0)
	{
		// ch에 저장된 값을 출력한다.
		printf("%hhu %c\n", ch, ch);
	}

	// 파일 스트림 닫기
	fclose(fp);

	return 0;
}