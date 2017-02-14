/*
	编写一段程序，像右边这样显示出小于输入的整数的所有2的乘方
*/

#include <stdio.h>

int main(void)
{
	int i, no;
	printf("请输入一个整数：");
	scanf("%d",&no);
	
/*
	i=1;
	while(i <= no)
		printf("%d ",i *= 2);	//此语句有错误 
*/

	i = 2;
	
	while(i<=no){
		printf("%d ",i);
		i*=2;
	}

/*
	for(i=2; i<=no; i*=2)
		printf("%d ",i); 
*/
	printf("\n");
	
	return 0;
} 