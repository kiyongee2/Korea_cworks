#include <stdio.h>

//정적변수 - static
//선언된 함수가 종료되어도 그 값을 계속 유지하는 변수
//프로그램이 종료될때 소멸함
void call();
int main_StaticVar()
{
	call();
	call();
	call();

	return 0;
}

//void -  반환 자료형이 없음
void call()
{
	static int x = 0;  //정적 변수

	x += 1;  //x = x + 1

	printf("현재 호출은  %d번째입니다.\n", x);
}