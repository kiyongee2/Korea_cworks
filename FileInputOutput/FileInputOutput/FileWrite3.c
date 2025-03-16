//#include <stdio.h>
//
////파일 쓰기(저장)
//int main()
//{
//	//영어 단어 저장하기
//	FILE* fp;
//
//	fopen_s(&fp, "words.txt", "w");
//	if (fp == NULL)
//	{
//		printf("파일 열기에 실패함\n");
//		return -1;
//	}
//
//	//단어 쓰기
//	char* words[] = { "ant", "bear", "chicken", "cow", "dog", "elephant",
//			"monkey", "lion", "tiger", "snake" };
//
//	for (int i = 0; i < 10; i++)
//	{
//		fprintf(fp, "%s\n", words[i]);
//	}
//
//	fclose(fp);
//
//	return 0;
//}