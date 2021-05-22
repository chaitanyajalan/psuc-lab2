#include<stdio.h>
int rMul(int m, int n)
{
if(m==1)
return(n);
return(n+rMul(m-1,n));
}
int main()
{
printf("Enter Two numbers to multiply");
int x,y;
scanf("%d%d",&x,&y);
printf("%d",rMul(x,y));
}
