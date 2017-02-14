/*
	编写一段程序，像右边这样根据输入的整数，循环1234567890，
	显示的位数和输入的整数值相同
*/

#include <stdio.h>

int main(void)
{
	int i, j, n;
	j = 1;
	printf("请输入一个整数：");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("%d",j);
		j++;
		if(j>9)
			j-=10;
	}
	
	printf("\n");
	
	return 0;
} 