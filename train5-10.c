/*
	��дһ�γ�����4��3�о����3��4�о���ĳ˻���
	������Ԫ�ص�ֵ�Ӽ������롣
*/

#include <stdio.h>

#define hang 4

#define lie 3

int main(void)
{
	int i, j, n;
	int ten1[hang][lie];
	int ten2[hang][lie];
	int ji[hang][lie];
	
	/*�����һ��4��3�о�������*/ 
	puts("�������һ��4��3�о������ݣ�");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("ten1[%d][%d]:", i, j);
			scanf("%d",&ten1[i][j]);
		//	putchar('\n');
		}
		putchar('\n');
	}
	
	/*����ڶ���4��3�о�������*/ 
	puts("������ڶ���4��3�о������ݣ�");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("ten2[%d][%d]:", i, j);
			scanf("%d",&ten2[i][j]);
		//	putchar('\n');
		}
		putchar('\n');
	}
	
	/*��ʾ��һ��4��3�о�������*/
	puts("4��3�о����������£�");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d", ten1[i][j]);
		}
		putchar('\n');
	} 
	
	/*��ʾ�ڶ���4��3�о�������*/
	puts("4��3�о����������£�");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d", ten2[i][j]);
		}
		putchar('\n');
	} 
	
	/*�˻�*/
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			ji[i][j]=ten1[i][j]*ten2[i][j];
		}
	} 
	
	/*��ʾ�˻�*/
	puts("�����������ݵĳ˻���");
	for(i=0; i<hang; i++){
		for(j=0; j<lie; j++){
			printf("%4d",ji[i][j]);
		}
		putchar('\n');
	}
	
	return 0;
}