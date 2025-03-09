#include <stdio.h>

int main()
{
	//정수형 이차원 배열 선언
	int a[2][2];
	int i, j;

	//값 저장
	a[0][0] = 1;
	a[0][1] = 2;
	a[1][0] = 3;
	a[1][1] = 4;

	printf("a[0][0]=%d\n", a[0][0]);
	printf("a[1][1]=%d\n", a[1][1]);

	/*for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
		}
	}*/
	printf("\n================\n");

	//2차원 배열 선언과 함께 초기화
	int arr[3][2] = { 
		{75, 80},
		{85, 95},
		{90, 100} 
	}; 
	int sum = 0;   //총점
	double average = 0.0;  //평균
	int count = 0; //개수 

	//출력 - 100점
	//printf("arr[2][1]=%d\n", arr[2][1]);

	//전체 출력
	for (i=0; i<3; i++)
	{
		for (j = 0; j < 2; j++) 
		{
			printf("arr[%d][%d]=%d\n", i, j, arr[i][j]);
		}
	}

	//전체 값 더하기
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			sum += arr[i][j];
			count++;
		}
	}
	printf("총점: %d\n", sum);

	//평균 = 총점 / 개수
	average = (double)sum / count;

	printf("평균: %.1lf\n", average);

	return 0;
}