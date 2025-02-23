#include <stdio.h>


//전역변수의 생명 주기
//프로그램이 시작될때 생성되고
//프로그램이 종료될때 소멸(해제) 된다.
int x = 1;  //전역 변수(Global Variable)
int add10(); //함수 선언부

int main_GlobalVar()
{

	//printf("x = %d\n", x);
	int value = add10();  //value - 지역변수(Local Variable)

	printf("value = %d\n", value);
	printf("x = %d\n", x);
	
	return 0;
}

int add10()
{
	x = x + 10;

	return x;
}