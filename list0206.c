/*
	整数和浮点数
*/

#include <stdio.h>

int main(void)
{
	int	n;	//整数
	double x;	//浮点数
	
	n=9.99;
	x=9.99;
	
	printf("int型变量n的值：%d\n", n);
	printf("n / 2：%d\n", n/2);
	
	printf("double型变量的值：%f\n", x); 	//浮点数应使用%f ，而不是%d 
	printf("x / 2.0：%f\n", x/2.0);
	
	return 0;
} 