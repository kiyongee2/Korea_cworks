//#define _CRT_SECURE_NO_WARNINGS  //fopen() ���� ����
//#include <stdio.h>
//
////���� ����(����)
//int main()
//{
//	//���� ������ ���� ����
//	FILE* fp;
//	int ch;
//
//	fp = fopen("out.txt", "r"); //r-�б� ���
//	if (fp == NULL)
//	{
//		printf("���� ���⿡ ������\n");
//		return -1;
//	}
//
//	//���� �б�
//	//�� ���� �б�
//	/*ch = fgetc(fp);
//	printf("%c %d\n", ch, ch);*/
//
//	//��� ���� �б�
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF) {//EOF=End Of File
//			break;
//		}
//		printf("%c", ch);
//	}
//
//	fclose(fp); //���� �ݱ�
//
//	return 0;
//}