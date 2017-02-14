/*
	输入整数值是否为0
*/

#include <stdio.h>

int main(void)
{
	int num;
	
	printf("请输入一个整数：");
	scanf("%d",&num);

	if(num)
		puts("该整数不为0");
	else
		puts("该整数为0");
/*	
	if(num == 0)
		puts("该整数为0");
	else
		puts("该整数不为0");
*/	
	return 0; 
} 