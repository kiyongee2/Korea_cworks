//#define _CRT_SECURE_NO_WARNINGS  //fopen() 오류 방지
//#include <stdio.h>
//
////파일 쓰기(저장)
//int main()
//{
//	//아스키(코드값) 파일 쓰기
//	FILE* fp;
//	fp = fopen("ascii.txt", "w");
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일 쓰기
//	for (int i = 32; i < 128; i++)
//	{
//		//문자 10개당 줄바꿈하기
//		if (i % 10 == 0)
//			fputc('\n', fp);
//		fputc(i, fp);  //한 문자 쓰기
//		fputc('\t', fp);
//	}
//
//	fclose(fp);
//
//	return 0;
//}