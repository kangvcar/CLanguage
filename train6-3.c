/*
	创建一个函数，返回int型整数的立方
*/

#include <stdio.h>

int cube(int x)
{
	return x*x*x;
} 

int main(void)
{
	int n1;
	
	puts("请输入一个整数。");
	printf("整数x：");
	scanf("%d",&n1);
	
	printf("x的立方是%d。\n", cube(n1));
	
	return 0; 
}