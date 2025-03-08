#include <stdio.h>

int main_PointerArray()
{
	//정수형 배열 - 크기(4)
	int a[4] = { 10, 20, 30, 40 };
	//정수형 포인터 배열
	int* pa;

	pa = a; //pa = &a[0];  //배열 a의 주소 저장

	/*printf("a[0]의 값은 %d\n", a[0]);
	printf("a[0]의 메모리 주소는 %x\n", &a[0]);
	printf("배열의 이름 a의 값 %x\n", a);

	printf("a[1]의 값은 %d\n", a[1]);
	printf("a[1]의 메모리 주소는 %x\n", &a[1]);
	printf("배열의 이름 a + 1의 값 %x\n", a + 1);*/

	//for (int i = 0; i < 4; i++)
	//{
	//	printf("%d %x %x\n", pa[i], &pa[i], pa + i);
	//}

	//역참조 - 포인터가 가리키는 값
	//printf("포인터 pa가 가리키는 메모리값: %d\n", *(pa + 0));  //*pa
	//printf("포인터 pa + 1이 가리키는 메모리값: %d\n", *(pa + 1));

	for (int i = 0; i < 4; i++)
	{
		printf("%x %d\n", pa + i, *(pa + i));
	}

	printf("\n-----------------------------------------\n");
	//문자열(배열)과 포인터 
	char msg[] = "Good Luck";  //맨뒤에 포함 '\0'
	char* p = msg;  //msg의 주소를 저장

	/*printf("%c\n", msg[0]);
	printf("%c\n", msg[1]);
	printf("%s\n", msg);*/

	//자료형의 크기
	printf("문자열의 크기: %dByte\n", sizeof(msg));
	printf("문자열 포인터의 크기: %dByte\n", sizeof(p));

	//메모리 주소
	printf("문자열 배열의 주소: %x\n", msg); //&msg[0]
	printf("문자열 포인터의 값: %x\n", p);

	//주소를 이용한 문자열 출력
	printf("%s\n", p);
	printf("%s\n", p + 1);
	printf("%s\n", p + 2);
	printf("%s\n", p + 3);
	printf("%s\n", p + 4);

	printf("\n-----------------------------------------\n");

	//포인터 역참조(*) 값 출력
	printf("%c\n", *p); //*(p + 0)
	printf("%c\n", *(p + 1)); 
	printf("%c\n", *(p + 2)); 
	printf("%c\n", *(p + 3));

	//문자열의 크기
	int size = sizeof(msg) / sizeof(msg[0]); 
	printf("%d\n", size);

	for (int i = 0; i < size; i++)
	{
		printf("%c", *(p + i));
	}

	return 0;
}