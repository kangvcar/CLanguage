/*
	编写一段程序，使之像右边这样连续显示*，总个数等于所输入的整数值。
	另外，当输入0以下的整数时，则什么也不显示。
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	
	printf("要显示的个数：");
	scanf("%d",&no);
	
	i=1;
	while(i++ <= no){
		printf("*\n");
	}
	
	return 0;
} 