/*
	��дһ�γ��򣬶Դ����嵥4-15�����޸ģ�
	����ʾ�����������ֵ������Լ��֮��
	��ʾԼ���ĸ�����
*/

#include <stdio.h>

int main(void)
{
	int i, j, n;
	
	printf("����ֵ��");
	scanf("%d",&n);
	
	j = 0;
	for(i=1; i<=n; i++){
		if(n%i==0){
			printf("%d\n",i);
			j++;
		}
	}
	printf("Լ����%d����\n",j);
	
	return 0;
} 