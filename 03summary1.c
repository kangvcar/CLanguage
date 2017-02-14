#include <stdio.h>

int main(void)
{
	int month;
	printf("请输入月份：");
	scanf("%d",&month);
	
	if(month < 1 || month > 12)
		printf("%d月不存在！！\n",month);
	else if(month <= 2 || month == 12)
		printf("%d月是冬季\n",month);
	else if(month >= 9)
		printf("%d月是秋季\n",month);
	else if(month >=6)
		printf("%d月是夏季\n",month);
	else
		printf("%d月是春季\n",month);

	return 0;
}