#include <stdio.h>

void CallByValue(int);  //�����
void CallByReference(int*);
int main_CallByRef()
{
	int num = 10;
	//num++;

	printf("\n***** ���� ���� ȣ�� *****\n");
	CallByValue(num); //1�� ���ϴ� �Լ�
	printf("main �Լ� �� �� ������: %d\n", num);

	printf("\n***** �ּҿ� ���� ȣ�� *****\n");
	CallByReference(&num);
	printf("main �Լ� �� �� ������: %d\n", num);

	return 0;
}

//���� ���� ȣ��
void CallByValue(int n)
{
	//1 ����
	n++;
	printf("���� �Լ� �� �� ������: %d\n", n);
}

//����(�޸� ����)�� ���� ȣ��
void CallByReference(int* p)
{
	//1 ����
	*p += 1; //p = *p + 1;
	printf("���� �Լ� �� �� ������: %d\n", *p);
}