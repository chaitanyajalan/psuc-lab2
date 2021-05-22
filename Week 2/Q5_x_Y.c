#include<stdio.h>
int main()
{
int x,Y;
printf("Enter x");
scanf("%d",&x);
if(x>0)
Y=1;
else if(x==0)
Y=0;
else if(x<0)
Y=-1;
printf("Y=%d",Y);

}
