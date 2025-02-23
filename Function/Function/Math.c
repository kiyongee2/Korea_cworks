#include <stdio.h>
#include <math.h> //round() 제공

int main_Math()
{
	//반올림 - round()  %f-실수 대응문자. lf%(long float)
	printf("%.2f\n", round(2.54));
	printf("%.2lf\n", round(2.54));
	printf("%.2lf\n", round(2.14));

	//내림(버림) - floor()
	printf("%.2lf\n", floor(2.54));

	//절대값 - abs()
	printf("%d\n", abs(8));
	printf("%d\n", abs(-8));

	return 0;
}