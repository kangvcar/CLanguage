#include <stdio.h>

int main(void)
{
	int sw;
	printf("请输入1或2或3：");
	scanf("%d",&sw);
	
	switch(sw){
		case 1:printf("红色"); break;
		case 2:printf("蓝色"); break;
		case 3:printf("白色"); break;
	}
	return 0; 
}