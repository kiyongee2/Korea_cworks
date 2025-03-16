#include <stdio.h>

//파일 읽기
int main()
{
	//영어 단어 저장하기
	FILE* fp;
	char buffer[256];  //단어를 저장할 배열

	fopen_s(&fp, "words.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기에 실패함\n");
		return -1;
	}

	//fgets()로 읽어오기
	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
		printf("%s", buffer);
	}

	fclose(fp);

	return 0;
}