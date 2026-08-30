// 16.6 #include와 헤더 파일
/*
	전처리 지시문 #include
	지정된 경로에 있는 헤더 파일을 소스 코드에 포함시킨다.
*/

// 전처리 지시문 #include과 헤더 파일의 경로

// 헤더 파일의 경로가 이미 지정되어 있을 경우 < > 사용
#include <stdio.h>

// 헤더 파일의 경로를 직접 지정할 경우 " " 사용
// - 검색할 헤더 파일의 위치를 상대 경로로 지정하는 경우
//   1) 현재 소스 파일 위치에서 my_macro.h을 검색 및 포함
#include "my_macro.h"
//   2) 현재 소스 파일 위치를 기준으로 my_headers 폴더 내에서 my_header.h을 검색 및 포함
#include "my_headers\my_header.h"

// - 검색할 헤더 파일의 위치를 절대 경로로 지정하는 경우
#include "D:\proejct\Visual Studio 2022\Learning_C\Section_16\16_06\my_headers\my_header.h"

int main(void)
{

	return 0;
}