#include<stdio.h> 
	int main(int argc, char** argv)
 {
    int y,r ;
        scanf("%d",&y); 
        r = ((y%4==0)&&(y%100!=0))||(y%400==0);
        printf("%d",r);
    return 0;
}
