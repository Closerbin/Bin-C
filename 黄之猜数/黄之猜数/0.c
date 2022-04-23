#define _CRT_SECURE_NO_WARNINGS 1
//这是一个猜数游戏，电脑随机给出一个1-10的数，请你猜出这个数。 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(0));
	int number = rand() % 10 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到10之间的数。");
	do {
		printf("请猜这个1到10之间数：");
		scanf("%d", &a);
		count++;
		if (a > number) {
			printf("你猜的数太大了。");
		}
		else if (a < number) {
			printf("你猜的数太小了。");
		}
	} while (a != number);
	printf("太好了，你用了%d次就猜到了答案。\n", count);
}