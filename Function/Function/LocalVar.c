#include <stdio.h>

//지역 변수 생명 주기(Scope)
//블록(함수, 제어문)안에서 초기화될때 생성되고
//블록을 벗어나면 소멸(해제)한다.
int sum10();
int main_LocalVar()
{
	int value = sum10();  //첫번째 호출

	printf("value = %d\n", value);

	value = sum10();  //두번째 호출
	printf("value = %d\n", value);
	//printf("x = %d\n", x);

	return 0;
}

int sum10()
{
	int x = 1;   //지역변수
	x = x + 10;

	return x;
}