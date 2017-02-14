/*
	读取两个整数，显示它们的商和余数
	转换说明有多个 
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("请输入第一个整数a：");
	scanf("%d",&a);
	
	printf("请输入第二个整数b：");
	scanf("%d",&b);
	
	printf("a除以b的商是%d，余数是%d \n",	a / b,	a % b);	//转换说明有多个
	
	return 0; 
} 