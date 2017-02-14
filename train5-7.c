/*
	编写一段程序，像右边这样读取数组中的数据个数和元素值并显示。
	显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
	注意利用对象宏来声明数组的元素个数，如代码清单5-12那样。
*/

#include <stdio.h>

#define NUMBER 4

int main(void)
{
	int i, num;
	int v[NUMBER];
	int j=0;
	
	printf("请输入%d个数据：\n",NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%d号：",i+1);
		scanf("%d",&v[i]);
		j++;
	} 
	printf("数据个数：%d\n",j);
	for(i=0; i<NUMBER; i++){
		if(i==0){
			printf("{");
		}
		if(i<NUMBER-2){
			printf("%d, ",v[i]);
		}else{
			printf("%d",v[i]);
		}
		
		if(i==NUMBER-1){
			printf("}\n");
		}
	}
	return 0;
} 