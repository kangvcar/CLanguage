/*
	显示并确认输入的整数值
*/

#include <stdio.h>

int main(void)
{
	int no;
	
	printf("请输入一个整数：");
	scanf("%d", &no);		//读取整数值， 注意scanf的用法要加 & 
	
	printf("您输入的是%d。\n", no);
	
	return 0;
} 

//由于int型能够存储的数值是有限的，-2^31 ~ 2^31 之间。超出之后无法正常显示 