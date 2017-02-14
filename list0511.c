/*
	输入学生的分数并显示出其中的最高分和最低分
*/

#include <stdio.h>

#define NUMBER 5

int main(void)
{
	int i;
	int tenus[NUMBER];
	int max, min;
	
	printf("请输入%d名学生的分数。\n", NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%2d号：", i+1);
		scanf("%d",&tenus[i]);
	}
	
	min = max = tenus[0];
	
	for(i=1; i<NUMBER; i++){
		if(tenus[i] > max)
			max = tenus[i];
		if(tenus[i] < min)
			min = tenus[i];
	}
	
	printf("最高分：%d\n", max);
	printf("最低分：%d\n", min);
	
	return 0;
} 