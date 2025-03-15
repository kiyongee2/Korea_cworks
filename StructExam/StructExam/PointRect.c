#include <stdio.h>

//Point 구조체 정의
struct Point
{
	//점의 좌표
	int x;
	int y;
};

//Rectangle 구조체 정의
struct Rectangle
{
	struct Point p1;  //구조체 참조(Reference)
	struct Point p2;
};

int main_Rectangle()
{
	//사각형을 그리기 위한 두개의 점의 좌표 생성
	struct Rectangle rect;

	rect.p1.x = 1;
	rect.p1.y = 4;

	rect.p2.x = 4;
	rect.p2.y = 1;

	printf("점1(%d, %d), 점2(%d, %d)\n",
		rect.p1.x, rect.p1.y, rect.p2.x, rect.p2.y);

	return 0;
}