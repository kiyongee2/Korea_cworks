//#define _CRT_SECURE_NO_WARNINGS  //fopen() 오류 방지
//#include <stdio.h>
//
////파일 쓰기(저장)
//int main()
//{
//	//파일 포인터 변수 생성
//	FILE* fp;
//	int ch;
//
//	fp = fopen("out.txt", "r"); //r-읽기 모드
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일 읽기
//	//한 글자 읽기
//	/*ch = fgetc(fp);
//	printf("%c %d\n", ch, ch);*/
//
//	//모든 글자 읽기
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF) {//EOF=End Of File
//			break;
//		}
//		printf("%c", ch);
//	}
//
//	fclose(fp); //파일 닫기
//
//	return 0;
//}