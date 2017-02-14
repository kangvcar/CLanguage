/*
	编写一段程序，使之像右边这样交替显示+和-，
	总个数等于所输入的整数值。另外，当输入0以下的正数时，
	则什么也不显示。
*/

#include <stdio.h>

int main(void)
{
	int i, num;
	
	printf("要显示多少个：");
	scanf("%d",&num);
	
	i = 1;
	while(i++ <= num){
		if(i%2)
			printf("-");
		else
			printf("+");
	}
	
	printf("\n");
		
	return 0;
} 