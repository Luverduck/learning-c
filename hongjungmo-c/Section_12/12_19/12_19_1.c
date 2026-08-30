// 12.19 멀티 스레딩
/*
	멀티 스레딩 (Multi-Threading)
	하나의 프로그램 실행(프로세스) 안에서 동시에 여러 작업(스레드)을 진행하는 것
	* C 언어에서는 멀티 스레딩을 지원하지 않는다.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// _Atomic int acnt = 0; // NA

DWORD WINAPI ThreadFunc(void* data)
{
	int n = 1;
	Sleep(1000);

	// acnt += n; // NA
	printf("Printing from Thread\n");
	
	return 0;
};

int main(void)
{
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);

	if (thread)
		WaitForSingleObject(thread, INFINITE);

	return 0;
}