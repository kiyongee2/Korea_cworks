#include <stdio.h>

//두 수를 계산하는 함수
int add(int, int);  //함수 선언부
int sub(int, int);
int main_Function2()
{

	int result1, result2;
	int a = 10, b = 20;

	result1 = add(a, b);  //더하기
	result2 = sub(a, b);  //빼기

	//출력
	printf("더한 결과: %d\n", result1);
	printf("뺀 결과: %d\n", result2);

	return 0;
}

//함수 정의
int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}