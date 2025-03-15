#include <stdio.h>

//성적 관리 프로젝트
typedef struct
{
	//과목별 점수
	int math;
	int eng;
}Score;

typedef struct
{
	//학번, 이름, 성적
	int number;
	char name[20];
	Score score;
}Student;

int main()
{
	//구조체 배열 선언
	Student s[3];

	printf("========= 성적 관리 프로그램 ==============\n");
	//콘솔 입력
	for (int i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);
	}

	//학생 정보 출력
	for (int i = 0; i < 3; i++)
	{
		printf("학번 %d\n", s[i].number);
	}

	return 0;
}