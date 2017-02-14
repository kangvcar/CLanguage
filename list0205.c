/*
	读取两个整数，显示出它们的平均值
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("请输入第一个整数a：");
	scanf("%d",&a);
	
	printf("请出入第二个整数b：");
	scanf("%d",&b);
	
	printf("它们的平均数是：%d \n", (a+b)/2);
	
	return 0;
} 