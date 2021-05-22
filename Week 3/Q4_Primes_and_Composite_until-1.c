#include<stdio.h>
int main(){
int n,c,i,x,p=0,co=0;

do
{printf("Enter Number");
scanf("%d",&n);
 c=0;i=1;
    do
    {
        x=n%i;
        if(x==0)
            c=c+1;
        i++;
    }
    while(i<=n);
   if(n>1){
    if(c<=2)
    p=p+1;
    else
    co=co+1;
   }

}
while(n!=-1);
printf("primes=%d\ncomposites=%d",p,co);
}
