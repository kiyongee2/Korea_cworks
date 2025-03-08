#include <stdio.h>

int main_Pointer1()
{
	//정수형 변수
	int n = 3;

	//정수형 포인터 변수 - 변수의 메모리 번지(주소)를 저장
	int* pn;
	pn = &n;  //변수 n의 주소를 저장함

	printf("변수의 값: %d\n", n);
	printf("변수의 메모리 번지: %x\n", &n);

	printf("포인터 (변수)의 값: %x\n", pn);
	printf("포인터 (변수)의 메모리 번지: %x\n", &pn);
	printf("포인터 (변수)가 가리키는 변수의 값: %d\n", *pn);

	//자료형의 크기
	//일반변수 - 정수형(4B), 문자형(1B), 실수형(8B)
	//포인터 - 모두 8Byte임
	printf("변수의 자료형 크기: %dByte\n", sizeof(n));
	printf("포인터 변수의 자료형 크기: %dByte\n", sizeof(pn));

	printf("======================================\n");
	//문자형 변수
	char c;
	char* pc;

	c = 'A';
	pc = &c;  //변수 c의 주소를 저장

	printf("변수의 값: %c\n", c);
	printf("변수의 주소: %x\n", &c);
	printf("포인터의 값: %x\n", pc);
	printf("포인터가 가리키는 메모리 값: %c\n", *pc);

	printf("변수의 자료형 크기: %dByte\n", sizeof(c));
	printf("포인터 변수의 자료형 크기: %dByte\n", sizeof(pc));

	return 0;
}