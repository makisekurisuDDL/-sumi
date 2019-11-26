#include <stdio.h>

int main(void)
{
	int x,max,max2; 
	int a[4];
	
	for(x=0;x<4;x++)
	{
		scanf("%d",&a[x]);
	}
	
	if (a[0] > a[1])
	{
		max = a[0];
		max2 = a[1]; 
	}
	else
	{
		max = a[1];
		max2= a[0];
	}
	
	for(x=2;x<5;x++)
	{
		if(max < a[x])
		
			max2 = max;
			max = a[x];
		
	}
		printf("%d",max2);
			
	return 0;
 } 
