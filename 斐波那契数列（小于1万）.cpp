 #include<stdio.h>
 
 int main(void)
 {
 	int n1 = 0; 
 	int n2 = 1;
 	int n3;
 	
 	printf("1\n");
 	
 	while(n2 < 10000)
 	{
 		n3 = n1 + n2;
 		printf("%d\n",n3);
 		n1 = n3;
 		n3 = n1 + n2;
 		n2 = n3;
 		printf("%d\n",n3);
 		
	 } 
	 	
 	return 0;
  } 
