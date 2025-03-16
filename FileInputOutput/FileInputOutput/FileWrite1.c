#define _CRT_SECURE_NO_WARNINGS  //fopen() 오류 방지
#include <stdio.h>

//파일 쓰기(저장)
int main_FileWrite1()
{
	//파일 구조체 포인터 생성
	FILE* fp;

	//fopen(파일, 모드) : 쓰기모드 - w, 읽기모드-r
	fp = fopen("out.txt", "w");  //파일 열기
	//예외(오류) 처리
	if (fp == NULL)
	{
		printf("파일 열기에 실패함\n");
		return 1; //0-정상, 1 or -1 -오류
	}

	//파일 쓰기
	//한 문자 쓰기
	fputc('H', fp);
	fputc('e', fp);
	fputc('l', fp);
	fputc('l', fp);
	fputc('o', fp);

	//문자열 쓰기
	fputs("\nApple\n", fp);
	fputs("사과\n", fp);

	fclose(fp);  //파일 닫기

	return 0;
}