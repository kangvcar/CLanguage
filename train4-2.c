/*
	编写一段程序，像右边这样读取两个整数的值，然后计算出它们之间所有整数的和
*/

#include <stdio.h>


int main(void)
{
	int n1, n2, sum, i;
	
	puts("请输入两个整数。");
	printf("整数a:");	scanf("%d",&n1);
	printf("整数b:");	scanf("%d",&n2);
	
	if(n1 >= n2){
		sum = 0;
		i = n2;
		do{
			sum = sum + i;
			i = i + 1; 
		}while(i <= n1);
		
		printf("大于等于%d小于等于%d的所有整数的和是%d\n", n1, n2, sum);
	}
	else{
		sum = 0;
		i = n1;
		do{
			sum = sum + i;
			i = i + 1;
		}while(i <= n2);
		
		printf("大于等于%d小于等于%d的所有整数的和是%d\n", n1, n2, sum);
	}

	return 0;
} 

