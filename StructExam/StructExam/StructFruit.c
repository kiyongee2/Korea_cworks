#include <stdio.h>

//과일 구조체
typedef struct
{
	char name[20]; //과일 이름
	int quantity;  //수량
	char *type;    //종류
}Fruit;

int main_Fruit()
{
	//포인터 배열 생성
	char* types[] = { "Apple", "Banana", "Orange" };

	//구조체 변수 선언
	Fruit f = { "대구 사과", 100, types[0] };

	printf("과일 이름: %s\n", f.name);
	printf("과일 수량: %d\n", f.quantity);
	f.type = "Kiwi";
	printf("과일 종류: %s\n", f.type);

	return 0;
}