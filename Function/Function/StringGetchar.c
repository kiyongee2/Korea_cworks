#include <stdio.h>

int main_GetChar()
{
	//getchar() - 문자 1개 입력
	//버퍼(buffer) - 임시기억장소
	char c1, c2;

	//printf("입력하세요\n");
	//c1 = getchar();  //'a' 입력 받음(버퍼에는 '\n'이 남아 있음)
	//while (getchar() != '\n'); //'\n'을 비움
	//c2 = getchar();  //'b' 입력 받음

	//printf("%c %c", c1, c2); //출력

	char name[20];
	int age;

	printf("이름 입력: ");
	//scanf_s("%s", name, sizeof(name));
	fgets(name, sizeof(name), stdin);

	//while (getchar() != '\n');  //버퍼 비우는 구문

	printf("나이 입력: ");
	scanf_s("%d", &age);

	printf("이름: %s, 나이: %d\n", name, age);
	return 0;
}