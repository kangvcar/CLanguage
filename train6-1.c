/*
	创建一个函数，返回两个int型整数中较小一数的值。
		 int min2 (int a, int b) { ····} 
	为了确认函数的动作，还需要大家创建一个合适的main函数来组成一段完整的程序
	（之后的练习也是如此）
*/ 

#include <stdio.h>

int min2(int a, int b)
{
	int min = a;
	if(b < min)
		min = b;
	return min;
}

int main(void)
{
	int n1, n2;
	
	puts("请输入两个整数。");
	printf("整数1：");	scanf("%d",&n1);
	printf("整数2：");	scanf("%d",&n2);
	
	printf("较小的值是：%d。\n",min2(n1, n2));
	
	return 0; 
}