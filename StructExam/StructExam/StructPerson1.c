#define _CRT_SECURE_NO_WARNINGS //strcpy()
#include <stdio.h>
#include <string.h> //strcpy()

//Person 구조체(자료형)
struct Person
{
	//이름, 나이, 키
	char name[20];
	int age;
	float height;
};

int main_StructPerson()
{
	//구조체 변수(객체) 선언
	struct Person p1 = { "알파고", 11, 165.8f };

	//멤버 변수에 접근(점 연산자 사용)
	//p1.name = "알파고";  //strcpy()
	/*strcpy(p1.name, "알파고");
	p1.age = 11;
	p1.height = 165.8f;*/

	//출력
	/*printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("키: %.1f\n", p1.height);*/

	//구조체 배열 생성
	struct Person p[3] = {
		{"이산", 15, 170.5f},
		{"한강", 42, 160.9f},
		{"박봄", 28, 173.4f},
	};

	for (int i = 0; i < 3; i++)
	{
		printf("이름: %s, 나이: %d, 키: %.1f\n", p[i].name,
			p[i].age, p[i].height);
	}

	return 0;
}