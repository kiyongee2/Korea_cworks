//#include <stdio.h>
//
////파일 쓰기(저장)
//int main()
//{
//	//아스키(코드값) 파일 읽기
//	FILE* fp;
//	int ch; //읽은 문자 1개
//	char buffer[256];  //읽은 데이터를 저장할 배열
//
//	//fp = fopen("ascii.txt", "r");
//	fopen_s(&fp, "ascii.txt", "r"); //_CRT_SECURE_NO_WARNINGS 불필요
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//파일 읽기 - fgetc() 사용
//	/*while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)
//			break;
//		printf("%c", ch);
//	}*/
//
//	/*while ((ch = fgetc(fp)) != EOF)
//	{
//		printf("%c", ch);
//	}*/
//
//	// fgets()
//	while (fgets(buffer, sizeof(buffer), fp) != NULL)
//	{
//		printf("%s", buffer);
//	}
//
//	fclose(fp);
//
//	//exe 파일 닫히지 않도록 함
//	system("pause");
//	
//	return 0;
//}