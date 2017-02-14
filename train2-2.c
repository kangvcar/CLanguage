/*
	读取两个整数，然后输出它们的和以及积
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	
	printf("请输入第一个整数a：");
	scanf("%d",&a);
	
	printf("请输入第二个整数b：");
	scanf("%d",&b);
	
	printf("%d与%d的和是%d,积是%d\n", a, b, a+b, a*b);
	
	return 0; 
} 