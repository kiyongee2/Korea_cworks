#include <stdio.h>
#include <stdlib.h>

int main_MallocInt2()
{
	int num = 10;
	int* ptr1;
	int* ptr2;

	ptr1 = &num; //정적 할당 8byte

	//동적 할당 1개 생성 - 4Byte * 2 = 8Byte
	ptr2 = (int*)malloc(sizeof(int) * 2); 
	if (ptr2 == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다.\n");
		exit(1);  //강제 종료함
	}

	ptr2[0] = 11;
	ptr2[1] = 12;

	printf("%d %x\n", *ptr1, ptr1);
	printf("%d %x\n", *(ptr2 + 0), ptr2 + 0);
	printf("%d %x\n", *(ptr2 + 1), ptr2 + 1);

	free(ptr2);  //메모리 해제

	return 0;
}