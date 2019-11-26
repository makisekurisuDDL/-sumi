#include<stdio.h>
int main(void)
{
	int a,b,h;
	scanf("%d",&h);
	for(a = 0;a < h;a++)
		{
			for(b = 0;b <= a;b++)
				printf("*");
			printf("\n");
		 } 
	return 0;
}
 
