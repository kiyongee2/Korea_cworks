#include <stdio.h>
#include <string.h>

void UpperCase(char);
int main()
{
	//문자열은 1차원 배열이다.
	char buf[] = "i am a student";
	int length;
	int i;

	//printf("%s\n", buf);

	/*printf("%c\n", buf[0]);
	printf("%c\n", buf[1]);
	printf("%c\n", buf[2]);*/

	char c1 = 'i';
	char c2 = 'I';

	printf("%c %d\n", c1, c1);
	printf("%c %d\n", c2, c2);

	length = strlen(buf);
	//printf("문자열이 개수: %d\n", length);

	for (i = 0; i < length; i++)
	{
		//printf("%c", buf[i]);  //소문자
		UpperCase(buf[i]);
	}
	
	return 0;
}

void UpperCase(char data)
{
	//'a' - 97, 'A' - 65 (결과: 32)
	if (data >= 'a' && data <= 'z')
	{
		data = data - ('a' - 'A'); //대문자로 변환
	}
	printf("%c", data);
}

