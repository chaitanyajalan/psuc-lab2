#include<stdio.h>
int main(){
int a,b,c,x,n,i;
printf("enter starting limit");
scanf("%d",&a);
printf("enter end limit");
scanf("%d",&b);
n=a;
printf("Prime numbers: ");
while(n<=b)
{
    c=0;i=1;
    while(i<=n)
    {
        x=n%i;
        if(x==0)
            c=c+1;
        i++;
    }
    if(c<=2)
    if(n!=0&&n!=1)
        printf("%d ",n);
    n++;
}
}
