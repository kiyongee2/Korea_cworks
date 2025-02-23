#include <stdio.h>

int main_ArrayInt()
{
	//국어 과목 점수
	/*int kor1 = 80;
	int kor2 = 75;
	int kor3 = 90;*/

	//배열
	int kor[] = { 80, 75, 90, 70 };
	int sum = 0;
	double avg = 0.0;  // 평균 = 합계 / 개수

	//개별 조회(접근)
	/*printf("kor[0]=%d\n", kor[0]);
	printf("kor[1]=%d\n", kor[1]);
	printf("kor[2]=%d\n", kor[2]);*/

	//수정(업데이트)
	kor[1] = 85;

	//전체 조회
	for (int i = 0; i < 4; i++)
	{
		printf("kor[%d] = %d\n", i, kor[i]);
	}

	//합계
	//int sum = kor[0] + kor[1] + kor[2] + kor[3];
	
	for (int i = 0; i < 4; i++)
	{
		sum += kor[i];  //sum = sum + kor[i];
		printf("kor[%d] = %d, sum = %d\n", i, kor[i], sum);
	}
	printf("합계=%d\n", sum);

	//평균
	avg = (double)sum / 4;    //정수형 -> 실수 형변환
	printf("평균=%.2lf\n", avg);


	return 0;
}