#include <stdio.h>

//성적 관리 프로그램
//성적 구조체 정의
typedef struct
{
	int math;
	int eng;
}Score;

//학생 구조체 정의
typedef struct
{
	int number;     //학번
	char name[20];  //이름
	Score score;    //성적 구조체 변수(참조)
}Student;

void showStudentInfo(Student);  //학생 정보 함수 선언부
int main()
{
	Student s[3];  //학생 구조체 변수 3명 선언
	int total[2] = { 0, 0 };  //수학, 영어의 총점 저장 배열
	double avg[2] = { 0.0, 0.0 }; //수학, 영어의 평균 저장 배열

	printf("== 성적 관리 프로그램 ==\n");

	//입력
	for (int i = 0; i < 3; i++)
	{
		printf("학번 입력: ");
		scanf_s("%d", &s[i].number);

		printf("이름 입력: ");
		scanf_s("%s", s[i].name, sizeof(s[i].name));

		printf("수학점수 입력: ");
		scanf_s("%d", &s[i].score.math);

		printf("영어점수 입력: ");
		scanf_s("%d", &s[i].score.eng);
	}

	//총점 및 평균 계산
	for (int i = 0; i < 3; i++)
	{
		total[0] = total[0] + s[i].score.math;  //수학 총점
		total[1] = total[1] + s[i].score.eng;  //영어 총점
	}
	avg[0] = (double)total[0] / 3; //수학 평균
	avg[1] = (double)total[1] / 3; //영어 평균

	//출력
	printf("============= 학생 정보 출력 =============\n");
	for (int i = 0; i < 3; i++)
	{
		showStudentInfo(s[i]);  //학생 정보 함수 호출
	}
	printf("수학 총점: %d, 영어 총점: %d\n", total[0], total[1]);
	printf("수학 평균: %.1lf, 영어 평균: %.1lf\n", avg[0], avg[1]);

	//exe 파일 창이 닫히지 않도록 함
	system("pause");

	return 0;
}

//학생 정보 함수 정의
void showStudentInfo(Student st)
{
	printf("학번: %d, 이름: %s, 수학: %d, 영어: %d\n",
		st.number, st.name, st.score.math, st.score.eng);
}