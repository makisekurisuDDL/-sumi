#include <stdio.h>
#include <math.h>

int main(int argc, char** argv)
{

	int	a = 8,b = 6;
	
	while(b)
	{
		int t = a % b;
		a = b;
		b = t;
	}
	printf("gcd=%d\n",a);
	return 0;
}
