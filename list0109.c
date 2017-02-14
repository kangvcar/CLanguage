/*
	在不为两个变量赋值的情况下显示
	只定义，不赋值会存储随意数到变量里 
*/

#include <stdio.h>

int main(void)
{
	int vx, vy;		//vx和vy都是int型的变量 
	
	printf("vx的值是%d。\n",vx);	//显示vx的值 
	printf("vy的值是%d。\n",vy);	//显示vy的值 
	
	return 0;
} 