#include <stdio.h>
#define MAX_LEN 4  //상수

int main_ArrayRemove()
{
	//정수형 배열 생성
	int carts[MAX_LEN];
	int idxOfCarts = 0;

	//요소 저장
	if (idxOfCarts >= MAX_LEN)
	{
		printf("더 이상 저장할 수 없습니다.");
		return;  //즉시 종료
	}

	carts[idxOfCarts++] = 80;  //carts[1]
	carts[idxOfCarts++] = 70;  //carts[2]
	carts[idxOfCarts++] = 95;  //carts[3]
	carts[idxOfCarts++] = 90;  //carts[4]
	//carts[idxOfCarts++] = 90;  //carts[5] //오류 발생

	//요소 삭제
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--];
	carts[idxOfCarts--]; //범위 초과

	if (idxOfCarts < 0)
	{
		printf("더 이상 삭제할 수 없습니다.\n");
	}

	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);
	}

	//반복문으로 입력 받기
	while (1)  //True - 1, False - 0
	{
		printf("점수 입력: ");
		scanf_s("%d", &carts[idxOfCarts++]);

		if (idxOfCarts >= MAX_LEN)
		{
			puts("더 이상 추가할 수 없음!!");
			return;  //즉시 종료 - 반복문 탈출
		}
	}

	//전체 출력
	for (int i = 0; i < idxOfCarts; i++)
	{
		printf("%3d", carts[i]);
	}

	return 0;
}