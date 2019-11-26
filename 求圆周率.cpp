#include<stdio.h>

int main(void)
{
	float x;	
	int y = 1,n = 3,z;
	printf("请输入计算次数\n");
	scanf("%d",&z);
	x = 1.0 - (1.0 / n);
	while(y<z)
	{
		n = n + 2;
		x = x + (1.0 / n);
		n = n + 2;
		x = x - (1.0 / n);
		y = y + 1; 
	}
	x = 4.0 * x;
	printf("%f",x);
	
	return 0;
	 
}
