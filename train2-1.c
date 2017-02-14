/*
	读取两个整数，然后显示出前者是后者的几分之几
*/

#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("请输入第一个整数：");
	scanf("%d",&x);
	
	printf("请输入第二个整数：");
	scanf("%d",&y);
	
	printf("%d是%d的%.lf%%\n", x, y, (double)x/y*100);
	
	return 0;
} 