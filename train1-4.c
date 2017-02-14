/*
	给变量赋值一个实数值的初始值,看看会发生什么？ 
	结果小数点后面的数被忽略了 
*/

#include <stdio.h>

int main(void)
{
	int vx = 3.14;
	int vy = vx + 5.7;
	
	printf("vx的值是%d。\n",vx);
	printf("vy的值是%d。\n",vy);
	
	return 0;
} 