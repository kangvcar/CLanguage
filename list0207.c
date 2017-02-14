/*
	读取两个实数值，用实数值显示出它们的和、差、积、商
	double类型的变量通过scanf函数赋值的时候需要使用格式字符串 %lf 
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;
	
	puts("请输入两个数：");
	printf("实数vx：");	scanf("%lf",&vx);	//double类型的变量通过scanf函数赋值的时候需要使用格式字符串 %lf
	printf("实数vy：");	scanf("%lf",&vy);
	
	printf("vx+vy=%f\n",vx+vy);
	printf("vx-vy=%f\n",vx-vy);
	printf("vx*vy=%f\n",vx*vy);
	printf("vx/vy=%f\n",vx/vy);
	
	return 0;
} 