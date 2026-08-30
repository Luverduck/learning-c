// 13.6 파일 임의 접근
/*
	파일 임의 접근
	파일 포인터를 조정하여 파일을 읽는 위치를 조정할 수 있다.
*/

#include <stdio.h>
int main(void)
{
	int ch;
	long cur;

	// 파일 스트림을 연다.
	FILE* fp = fopen("test.txt", "r");

	// 파일 스트림에서 현재 위치를 확인한다.
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// 파일 스트림의 위치를 현재 위치를 기준으로 +2[Byte]만큼 이동시킨다.
	fseek(fp, 2L, SEEK_SET);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// 파일 스트림에서 현재 위치의 문자열을 출력한 후 다음 위치로 이동시킨다.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// 파일 스트림의 위치를 현재 위치를 기준으로 -2[Byte]만큼 이동시킨다.
	fseek(fp, -2L, SEEK_CUR);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// 파일 스트림에서 현재 위치의 문자열을 출력한 후 다음 위치로 이동시킨다.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);
	cur = ftell(fp);
	printf("ftell = %ld\n", cur);

	// 파일 스트림의 위치를 파일의 끝을 기준으로 0[Byte]만큼 이동시킨다.
	fseek(fp, 0L, SEEK_END);
	// 파일 스트림에서 현재 위치의 문자열을 출력한 후 다음 위치로 이동시킨다.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	// 파일 스트림의 위치를 파일의 끝을 기준으로 -1[Byte]만큼 이동시킨다.
	fseek(fp, -1L, SEEK_END);
	// 파일 스트림에서 현재 위치의 문자열을 출력한 후 다음 위치로 이동시킨다.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	// 파일 스트림의 위치를 파일의 끝을 기준으로 -2[Byte]만큼 이동시킨다.
	fseek(fp, -2L, SEEK_END);
	// 파일 스트림에서 현재 위치의 문자열을 출력한 후 다음 위치로 이동시킨다.
	ch = fgetc(fp);
	printf("%d %c\n", ch, ch);

	return 0;
}