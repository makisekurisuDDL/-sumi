#include<stdio.h>

int main(void)
{
	float x = 1.0,y = 3.0,z = 2.0;
	float n;
	int a,b = 1;
	scanf("%d",&a);
	n = (z * z)/(x * y);
	while(b<a)
	{
		x = x + 2.0;
		y = y + 2.0;
		z = z + 2.0;
		n = n * (z * z)/(x * y);
		b = b + 1;
	}
	n = n * 2.0;
	printf("%f",n);
	return 0;
	
	
}
