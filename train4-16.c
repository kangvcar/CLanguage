/*
	编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
*/

#include <stdio.h>

int main(void)
{
	int i, n;
	printf("整数值：");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
		if(i%2!=0)
			printf("%d ",i);
		
	putchar('\n');
	
	return 0;
}