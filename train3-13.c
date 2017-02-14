/*
	对代码清单3-17中的程序进行修改，不使用if语句，而是改用switch语句
	显示所输入的月份所处在的季节
*/

#include <stdio.h>

int main(void)
{
	int month;
	
	printf("请输入月份：");
	scanf("%d",&month);
	
	switch(month){
		case 1:printf("%d月是冬季。\n",month);	break;
		case 2:printf("%d月是冬季。\n",month);	break;
		case 3:printf("%d月是春季。\n",month);	break;
		case 4:printf("%d月是春季。\n",month);	break;
		case 5:printf("%d月是春季。\n",month);	break;
		case 6:printf("%d月是夏季。\n",month);	break;
		case 7:printf("%d月是夏季。\n",month);	break;
		case 8:printf("%d月是夏季。\n",month);	break;
		case 9:printf("%d月是秋季。\n",month);	break;
		case 10:printf("%d月是秋季。\n",month);	break;
		case 11:printf("%d月是秋季。\n",month);	break;
		case 12:printf("%d月是冬季。\n",month);	break;
	}
	return 0;
} 