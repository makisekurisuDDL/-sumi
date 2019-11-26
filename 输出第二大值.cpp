#include<stdio.h>


int main(void)
{
	int a[4],x,y,t,max;
	
	for(x=1;x<5;x++)
	{
	scanf("%d",&a[x]);
	}
	
	for(x=1;x<4;x++)
	{
		if(a[x] > a[x+1])
		{
		y = a[x+1];
		a[x+1] = a[x];
		a[x] = y;
		}
	}
	
	for(x=1;x<3;x++)
	{
		if(a[x] > a[x+1])
		{
		y = a[x+1];
		a[x+1] = a[x];
		a[x] = y;
		}
	}
	
	if(a[1] > a[2])
	{
		y = a[2];
		a[2] = a[1];
		a[1] = y;
	}
	y = a[3];
	
	printf("\n%d",y);
	return 0;
	
}
