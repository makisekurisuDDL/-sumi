#include<stdio.h>
int main(void)
{
	int x,y,fahr;
	double celsius;
	x = 0;
	y = 300;
	printf("ÉãÊÏ¶È »ªÊÏ¶È\n");
	while(x<=y)
	{
		celsius = x;
		fahr = (celsius * 9 / 5)+ 32;
		printf("%d,%f\n",fahr,	celsius);
		x = x + 20;
		
	}
	
	return 0;
	
}
 
