#include<stdio.h> 
	int main(int argc, char** argv)
 {
    int y,r ;
        scanf("%d",&y); 
        r = ((y%4==0)&&(y%100!=0))||(y%400==0);
        if(r == 1)
        	printf("是闰年");
        	else
				printf("不是闰年") ;
    return 0;
}
