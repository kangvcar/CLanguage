/*
	�Դ����嵥3-17�еĳ�������޸ģ���ʹ��if��䣬���Ǹ���switch���
	��ʾ��������·������ڵļ���
*/

#include <stdio.h>

int main(void)
{
	int month;
	
	printf("�������·ݣ�");
	scanf("%d",&month);
	
	switch(month){
		case 1:printf("%d���Ƕ�����\n",month);	break;
		case 2:printf("%d���Ƕ�����\n",month);	break;
		case 3:printf("%d���Ǵ�����\n",month);	break;
		case 4:printf("%d���Ǵ�����\n",month);	break;
		case 5:printf("%d���Ǵ�����\n",month);	break;
		case 6:printf("%d�����ļ���\n",month);	break;
		case 7:printf("%d�����ļ���\n",month);	break;
		case 8:printf("%d�����ļ���\n",month);	break;
		case 9:printf("%d�����＾��\n",month);	break;
		case 10:printf("%d�����＾��\n",month);	break;
		case 11:printf("%d�����＾��\n",month);	break;
		case 12:printf("%d���Ƕ�����\n",month);	break;
	}
	return 0;
} 