#include <stdio.h>

void CallByValue(int);  //선언부
void CallByReference(int*);
int main_CallByRef()
{
	int num = 10;
	//num++;

	printf("\n***** 값에 의한 호출 *****\n");
	CallByValue(num); //1을 더하는 함수
	printf("main 함수 내 값 변경후: %d\n", num);

	printf("\n***** 주소에 의한 호출 *****\n");
	CallByReference(&num);
	printf("main 함수 내 값 변경후: %d\n", num);

	return 0;
}

//값에 의한 호출
void CallByValue(int n)
{
	//1 증가
	n++;
	printf("지역 함수 내 값 변경후: %d\n", n);
}

//참조(메모리 번지)에 의한 호출
void CallByReference(int* p)
{
	//1 증가
	*p += 1; //p = *p + 1;
	printf("지역 함수 내 값 변경후: %d\n", *p);
}