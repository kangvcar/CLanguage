/*
	��дһ�γ������ұ�������ȡ�����е����ݸ�����Ԫ��ֵ����ʾ��
	��ʾʱ����ֵ֮���ö��źͿո�ָ���ô����Ž�����ֵ��������
	ע�����ö���������������Ԫ�ظ�����������嵥5-12������
*/

#include <stdio.h>

#define NUMBER 4

int main(void)
{
	int i, num;
	int v[NUMBER];
	int j=0;
	
	printf("������%d�����ݣ�\n",NUMBER);
	for(i=0; i<NUMBER; i++){
		printf("%d�ţ�",i+1);
		scanf("%d",&v[i]);
		j++;
	} 
	printf("���ݸ�����%d\n",j);
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