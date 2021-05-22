#include<stdio.h>
int main(){
int flag=0,n,x,smallest=9;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
x=n%10;
if(x<=smallest&&(x%2!=0))
{smallest=x;flag=1;}
n=n/10;
}
if(flag==0)
printf("No odd digit in the number");
else
printf("Smallest odd digit=%d",smallest);
}
