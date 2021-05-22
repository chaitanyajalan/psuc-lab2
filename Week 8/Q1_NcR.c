#include<stdio.h>
int Fact(int x)
{
int f=1,i;
for(i=1;i<=x;i++)
f=f*i;
return(f);
}
int main()
{
int n,r,y;
printf("Enter N and R");
scanf("%d%d",&n,&r);
y=Fact(n)/(Fact(n-r)*Fact(r));
printf("NcR=%d",y);
}
