

#define _CRT_SECURE_NO_WARNINGS		

#include<stdio.h>					// ǥ����� �Լ� printf() ����� ���� ��� ���� ����

int main()							// main �Լ� ���, �Է� ���ڴ� ���� int�� �� ��ȯ
{
	int year, month, day;			// ������ ���� year, month, day ����
	printf("��, ��, ���� �Է��ϼ���:");
	scanf("%d.%d.%d", &year, &month, &day);	// ���� year, month, day�� ������ ���� �Է�
	printf("�Է¹��� ��¥�� %d-%d-%d�Դϴ�.", day, month, year);	// ������ �Է¹��� ������ ���� ���¸� �ٲپ� ���


	return 0;						// �Լ��� ����
}