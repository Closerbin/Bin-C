#define _CRT_SECURE_NO_WARNINGS 1
//����һ��������Ϸ�������������һ��1-10����������³�������� 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand() % 10 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��10֮�������");
	do {
		printf("������1��10֮������");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("��µ���̫���ˡ�");
		}
		else if (a < number) {
			printf("��µ���̫С�ˡ�");
		}
	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);
}