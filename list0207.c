/*
	��ȡ����ʵ��ֵ����ʵ��ֵ��ʾ�����ǵĺ͡��������
	double���͵ı���ͨ��scanf������ֵ��ʱ����Ҫʹ�ø�ʽ�ַ��� %lf 
*/

#include <stdio.h>

int main(void)
{
	double vx, vy;
	
	puts("��������������");
	printf("ʵ��vx��");	scanf("%lf",&vx);	//double���͵ı���ͨ��scanf������ֵ��ʱ����Ҫʹ�ø�ʽ�ַ��� %lf
	printf("ʵ��vy��");	scanf("%lf",&vy);
	
	printf("vx+vy=%f\n",vx+vy);
	printf("vx-vy=%f\n",vx-vy);
	printf("vx*vy=%f\n",vx*vy);
	printf("vx/vy=%f\n",vx/vy);
	
	return 0;
} 