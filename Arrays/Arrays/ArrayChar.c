#include <stdio.h>

int main_ArrayChar()
{
	//문자형 배열
	char c1, c2, c3;
	c1 = 'B'; //한 문자는 홑따옴표
	c2 = c1 + 1;
	c3 = c1 - 1;
	//c4 = '가'; //c언어에서는 한글 출력 오류 발생

	char c4[] = "가"; // 한글 표기는 배열로 함

	printf("%c\n", c1);
	printf("%c\n", c2);
	printf("%c\n", c3);

	printf("%s\n", c4);

	//알파벳 대문자를 저장하고 출력하세요.
	char alphabets[26];  //26개의 크기를 가진 문자형 배열 생성
	char ch = 'A';

	for (int i = 0; i < 26; i++)
	{
		alphabets[i] = ch;
		ch++; //ch = ch + 1
	}

	for (int i = 0; i < 26; i++)
	{
		printf("%c %d\n", alphabets[i], alphabets[i]);
	}

	return 0;
}