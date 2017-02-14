/*
	使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂。
		int pow4 (int x)
*/

#include <stdio.h>

int sqr(int x)
{
	return x * x;
} 

int pow4(int x)
{
	return sqr(sqr(x));
}

int main(void)
{
	int n1;
	
	puts("请输入一个整数。");
	printf("整数x：");	scanf("%d",&n1);
	
	printf("x的四次幂是%d。\n", pow4(n1));
	
	return 0;
}