#include <stdio.h>
#include <stdlib.h> //malloc(), free()

int main()
{
	//알파벳 대문자를 저장할 포인터 배열 선언
	char* pc;
	pc = (char *)malloc(sizeof(char) * 26); //1Byte x 26 = 26B
	if (pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);
	}

	*pc = 'A';  //*(pc + 0)
	*(pc + 1) = 'B';

	/*printf("%c\n", *pc);
	printf("%c\n", *(pc + 1));*/

	//대문자 저장
	for (int i = 0; i < 26; i++)
	{
		*(pc + i) = 'A' + i;
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%2c", *(pc + i));
	}

	free(pc);

	return 0;
}