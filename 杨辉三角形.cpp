#include<stdio.h>

int main(void)
{
	int a[11];
	int i,j,k;
	for(j=0;j<10;j++)
	{
		a[j] = 1;
		for(i=j-1;i>0;i--)
		{
			a[i] = a[i] + a[i-1];
		}
        for(i=0;i<=j;i++)
            printf("%6d ",a[i]); 
        
        printf("\n"); 
    }
    return 0;
}
