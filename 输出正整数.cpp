#include<stdio.h>

int main(void)
{
	int x = 1;
	int y; 
	scanf("%d",&y);
	
	while(x<=y)
	{
		printf("%d\n",x);
		x = x + 1;
	}
	
	return 0;
	
 } 
