/*
	将数组的所有元素设置为0
*/

#include <stdio.h>

/*---把0赋给有n个元素的数组v的所有元素---*/
void set_zero(int v[], int n)
{
	int i;
	
	for(i=0; i<n; i++){
		v[i]=0;
	}
} 

/*---显示有n个元素的数组v的所有元素并换行---*/
void print_array(const int v[], int n)
{
	int i;
//	ary1[1] = 5;		因为有const声明，所以不能有修改数组的语句 
	
	printf("{ ");
	for(i=0; i<n; i++){
		printf("%d ", v[i]);
	}
	printf("}");
} 

int main(void)
{
	int ary1[] = {1, 2, 3, 4, 5};
	int ary2[] = {3, 2, 1};
	
	printf("ary1 = "); print_array(ary1, 5);	putchar('\n');
	printf("ary2 = "); print_array(ary2, 3);	putchar('\n');
		
	set_zero(ary1, 5);
	set_zero(ary2, 3);

	printf("把0赋给了两个数组的所有元素。\n");
	printf("ary1 = "); print_array(ary1, 5);	putchar('\n');
	printf("ary2 = "); print_array(ary2, 3);	putchar('\n');
	
	return 0;
}