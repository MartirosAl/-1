#include<stdio.h>
#include<string.h>

int main()
{
	system("chcp 1251"); //������� ����
	system("cls");

	char str1[100];	//���������� � ����������� ���������
	char str2[200];	//���������� � �������� ���������

	printf("������� ������: ");
	gets(str1);


	two_spaces(str2, str1);
	
	printf("\n���������: %s", str2);

	return 0;
}