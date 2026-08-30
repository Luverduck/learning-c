// 16.6 #include와 헤더 파일
/*
	전처리 지시문 #include
	지정된 경로에 있는 헤더 파일을 소스 코드에 포함시킨다.
*/

// 헤더 파일을 탐색할 위치를 직접 지정
// 1) 솔루션 우클릭 후 [Properties] 선택
// 2) [C/C++]-[General]에서 [Additional Include Directories]에 탐색 경로 지정
//   - 전처리기가 현재 소스 파일을 기준으로 한 상대 경로 my_headers에서 헤더 파일을 검색
#include "<my_header.h>"

int main(void)
{

	return 0;
}