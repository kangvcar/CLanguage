/*
	对代码清单4-17中的程序进行修改，显示出一个横向较长的长方形。
	·读取两个边的边长，以较小的数作为行数，以较大的数作为列数。
*/

#include <stdio.h>

int main(void)
{
	int i, j, n1, n2;
	
	puts("让我们来画一个长方形。");
	printf("一边：");	scanf("%d",&n1);
	printf("另一边：");	scanf("%d",&n2);
	
	if(n1>=n2){
		for(i=1; i<=n2; i++){
			for(j=1; j<=n1; j++)
				printf("*");
			printf("\n");
		}
	}else{
		for(i=1; i<=n1; i++){
			for(j=1; j<=n2; j++)
				printf("*");
			printf("\n");
		}
	}
	
	return 0;
} 