/*
	计算最高分
*/

#include <stdio.h>

#define NUMBER 5

int tensu[NUMBER];

int top(void);		//函数原型声明，声明了函数的返回值和形参，并未定义函数 

int main(void)
{
	extern int tensu[];
	int i;
	
	printf("请输入%d名学生的分数。\n", NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%d:", i+1);
		scanf("%d", &tensu[i]);
	}
	printf("最高分=%d\n", top());
	return 0;
} 

int top(void)		//如果把此函数定义放在main函数之前，则不需要函数原型声明 
{
	extern int tensu[];
	int i;
	int max=tensu[0];
	
	for(i=1; i<NUMBER; i++){
		if(tensu[i]>max){
			max=tensu[i];
		}
	}
	return max;
}