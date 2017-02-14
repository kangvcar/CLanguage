/*
	编写一段程序，像右边这样显示1到n的整数值的二次方。
*/

#include <stdio.h>

int main(void)
{
	int i, n, pf;
	
	printf("n的值：");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		pf = i*i;
		printf("%d的二次方是%d\n", i, pf);
	} 
	
	return 0;
} 