#include <stdio.h>
#include <math.h>  //abs() 포함

//절대값을 구하는 함수 정의
int myAbs(int x)
{
	if (x < 0) 
	{
		return -x;
	}
	else
	{
		return x;
	}
}

int main_Function3()
{
	int value1, value2, value3;

	value1 = abs(-3);  //내장 함수 호출
	value2 = abs(+3);

	value3 = myAbs(-3); //사용자 정의 함수 호출

	printf("내장 함수의 절대값: %d\n", value1);
	printf("내장 함수의 절대값: %d\n", value2);
	printf("내가 만든 함수의 절대값: %d\n", value3);

	return 0;
}