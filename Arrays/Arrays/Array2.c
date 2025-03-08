#include <stdio.h>

int main_Array2()
{
	//요소가 5개인 정수형 배열  score 선언
	int score[] = { 86, 70, 90, 70, 85 };
	int n;  //반복 변수
	int total = 0;  //합계 변수: 0으로 설정
	double avg = 0.0; //평균 변수

	//특정 요소에 접근(조회)
	printf("score[1] = %d\n", score[1]);
	printf("score[4] = %d\n", score[4]);

	//요소 수정
	score[2] = 95;
	printf("score[2] = %d\n", score[2]);

	//전체 조회(검색)
	for (n = 0; n < 5; n++)
	{
		printf("%d\n", score[n]);
	}

	//요소의 합계
	printf("%d\n", score[0] + score[1]);

	for (n = 0; n < 5; n++)
	{
		total += score[n]; //total = total + score[n];
	}
	//요소의 평균 = 합계 / 개수
	// 계산이 정수형(int)이므로 double로 강제 형변환해야 함 
	//avg = total / 5.0;
	avg = (double)total / 5;  

	printf("합계: %d\n", total);
	printf("평균: %.1lf\n", avg);
	return 0;
}