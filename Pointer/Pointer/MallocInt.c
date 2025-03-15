#include <stdio.h>
#include <stdlib.h>  //malloc(), free()

int main_MallocInt()
{
	//배열의 크기가 4인 정수형 배열 선언 - 정적 할당
	int n[4];

	//저장
	/*n[0] = 10;
	n[1] = 20;
	n[2] = 30;
	n[3] = 40;*/

	//출력
	/*for (int i = 0; i < 4; i++)
	{
		printf("%d\n", n[i]);
	}*/

	//동적 할당(포인터)
	int* pn = (int *)malloc(sizeof(int) * 4); //4Byte * 4 = 16Byte

	//저장
	/*pn[0] = 10;
	pn[1] = 20;
	pn[2] = 30;
	pn[3] = 40;*/

	//짝수값 저장
	for (int i = 0; i < 4; i++)
	{
		pn[i] = i * 2;
	}

	//출력
	for (int i = 0; i < 4; i++)
	{
		printf("%2d", pn[i]);
	}

	free(pn);  //메모리 해제

	return 0;
}