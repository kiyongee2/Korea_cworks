//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//년도를 입력하세요
	//배열 아닌 경우 - scanf_s(서식문자, 변수이름)
	int year;
	char city[20];

	printf("년도 입력: ");
	scanf_s("%d", &year);  //& - 주소 연산자
	printf("%d 년입니다.\n", year);

	//도시를 입력하세요.
	//배열인 경우 - scanf_s(서식문자, 배열이름, 배열의 자료크기)
	printf("도시 입력: ");
	scanf_s("%s", city, sizeof(city));
	printf("%s시\n", city);
	
	/*
	//변수와 메모리 주소
	int num1 = 90;
	printf("%d, %x\n", num1, &num1);

	int num2 = 80;
	printf("%d, %x\n", num2, &num2);

	printf("================\n");

	//점수가 3개인 배열
	int score[3] = {80, 70, 90};

	printf("%d %x\n", score[0], &score[0]);
	printf("%d %x\n", score[1], &score[1]);
	printf("%d %x\n", score[2], &score[2]);

	//배열의 시작주소는 배열의 이름이다.
	//주소의 대응문자 - %x(16진수 표기)
	printf("%d %x\n", score[0], score);
	*/

	return 0;
}