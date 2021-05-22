#include<stdio.h>
int main(){
int y=0,x,a,n=100;
while(n<1000)
{
a=n;
while(a>0)
{
x=a%10;
y=x*x*x+y;
a=a/10;
}
if(y==n)
printf("%d ",n);
n++;
}
}
