#include <stdio.h>
#include <stdlib.h>  //srand(), rand() 정의
#include <time.h> //time() 정의

int main_Rand()
{
	int rndVal;  //랜덤수를 저장할 변수 선언 
	int coin, dice;  //동전, 주사위

	//rand() - 난수(무작위 수)
	//srand(11); //seed값 고정 설정
	srand(time(NULL));  //시간이 흐르므로 매번 seed가 바뀜

	rndVal = rand();  //rand() 호출
	//printf("%d\n", rndVal);

	//동전
	coin = rand() % 2;  //나머지 0, 1
	printf("동전: %d\n", coin);

	if (coin == 0)
	{
		printf("앞면\n");
	}
	else
	{
		printf("뒷면\n");
	}

	//주사위 눈
	dice = rand() % 6 + 1;  //나머지 0~5에 1더함, 주사위는 1~6
	//printf("주사위 눈: %d\n", dice);

	//주사위 10번 던지기
	for (int i = 1; i <= 10; i++)
	{
		dice = rand() % 6 + 1;
		printf("주사위 눈: %d\n", dice);
	}

	//사계절을 랜덤하게 출력
	char season[4][5] = { "봄", "여름", "가을", "겨울" };
	int rndIdx = 0;

	/*printf("%s\n", season[0]);
	printf("%s\n", season[1]);
	printf("%s\n", season[2]);
	printf("%s\n", season[3]);*/

	int size = sizeof(season) / sizeof(season[0]);
	printf("%d %d\n", sizeof(season), sizeof(season[0]));
	printf("%d\n", size);

	rndIdx = rand() % size;  //나머지 0~3
	printf("계절: %s\n", season[rndIdx]);

	//사계절을 포인터로 선언
	char *season2[] = { "봄", "여름", "가을", "겨울" };

	printf("계절: %s\n", season2[rndIdx]);
	return 0;
}
