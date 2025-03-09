#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char* words[] = { "ant", "bear", "chicken", "cow", "deer",
		"elephant", "fox", "horse", "monkey", "tiger" };
	char* question;  //문제
	char answer[20]; //사용자 입력
	int n = 1;  //문제 번호
	clock_t start, end;  //시작시간, 종료시간
	double elapsed;  //소요 시간
	int size, idx;  //배열의 크기

	//랜덤 seed 설정
	srand(time(NULL));

	printf("영어 타자 게임, 준비되면 엔터>");
	getchar();  //엔터

	start = clock();    //시작 시간 
	while (n <= 10)
	{
		printf("\n문제 %d\n", n);
		size = sizeof(words) / sizeof(words[0]);
		idx = rand() % size;
		question = words[idx];

		printf("%s\n", question);  //문제 출제
		scanf_s("%s", answer, sizeof(answer)); //사용자 입력

		if (strcmp(question, answer) == 0)  //일치하면
		{
			printf("통과!\n");
			n++;  //다음 문제
		}
		else
		{
			printf("오타! 다시 도전!\n");
		}
	}
	end = clock();
	//CLOCKS_PER_SEC 상수는 ms(마이크로초)를 s(초)로 표시해줌
	elapsed = (double)(end - start) / CLOCKS_PER_SEC;
	printf("게임 소요 시간; %.2lf초\n",  elapsed);

	return 0;
}