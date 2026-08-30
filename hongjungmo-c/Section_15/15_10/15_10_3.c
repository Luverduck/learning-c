// 15.10 비트 필드의 사용 방법
/*
    MS-DOS의 파일 생성 시각
    MS-DOS의 파일 생성 시각을 저장하는 정보는 비트 필드로 구성
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    struct file_time
    {
        unsigned int second : 5; // 2^5 = 32,  (0 ~ 29) 30*2 seconds
        unsigned int minute : 6; // 2^6 = 64,  (0 ~ 59) 60 minutes
        unsigned int hour   : 5; // 2^5 = 32,  (0 ~ 23) 24 hours
    } ft;

    struct file_date
    {
        unsigned int day    : 5; // 2^5 = 32,  1 ~ 31
        unsigned int month  : 4; // 2^4 = 16,  1 ~ 12
        unsigned int year   : 7; // 2^7 = 128, 1980 ~ 
    } fd;

    // 1988.12.28
    fd.day = 28;
    fd.month = 12;
    fd.year = 8;

    printf("Day %u, Month %u, Year %u\n", fd.day, fd.month, fd.year);


    // 비트 필드 사용 시 주의할 점
    // scanf 함수로 비트 필드의 값을 설정할 수 없다.
    // scanf("%d", &fd.day); // error C2104: '&' on bit field ignored

    return 0;
}