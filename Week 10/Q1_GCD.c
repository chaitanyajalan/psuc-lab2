#include<stdio.h>

int rGCD(int x, int y)
{
if(y==0)
return(x);
return(rGCD(y,x%y));
}
int main()
{
int a,b;
printf("Enter Two Numbers to find GCD");
scanf("%d%d",&a,&b);
printf("%d",rGCD(a,b));
}
